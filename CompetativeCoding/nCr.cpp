//https://practice.geeksforgeeks.org/problems/ncr/0/
// 10^9+7
#include<bits/stdc++.h>
using namespace std;
int modu = 1000000007;
unsigned long long int fact(int n, int k){
    /*unsigned long long int f[n];
    f[0] = 1;
    f[1] = 1;
    for(unsigned long long int i = 2 ; i<=n; i++)
        f[i] = f[i-1]%k * i%k;
    return f[n];*/
    int dp[k+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=min(i,k);j>0;j--)
        dp[j]=(dp[j]+dp[j-1])%modu;
    }
    return dp[k]%modu;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, r;
        cin>>n>>r;
        if(r>n)
            cout<<"0"<<endl;
        else{
            cout<<(fact(n, r))<<endl;
        }
    }
    return 0;
}