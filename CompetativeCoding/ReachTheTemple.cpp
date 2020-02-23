//https://www.codechef.com/STRT2020/problems/TEMPLE
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main(){
    int i,j,k,h,x;
    int arr[3];
    cin>>h;
    cin>>arr[0]>>arr[1]>>arr[2];
    cin>>k;
    int dp[k+1][h+1];
    for(i=0;i<=k;i++)
        dp[i][0] = 0;
    for(j=0;j<=h;j++)
        dp[0][j] = 0;
    dp[0][0] = 1;
    for(i=1;i<=k;i++){
        for(j=1;j<=h;j++){
            dp[i][j] = 0;
            for(x=0;x<3;x++){
                if((j-arr[x]) >= 0)
                    dp[i][j] = (dp[i][j] + dp[i-1][j-arr[x]])%MOD;
            }
        }
    }
    cout<<dp[k][h]<<endl;
    return 0;
}