//https://codeforces.com/problemset/problem/1231/C
#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
    ll n, m, i, j;
    cin>>n>>m;
    int a[n][m];
    for(i=0; i<n; i++)
        for(j=0; j<m;j++)
            cin>>a[n-i-1][m-j-1];
    ll ans= 0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(a[i][j]==0){
                a[i][j] = min(a[i-1][j]-1, a[i][j-1]-1);
            }
            if(i>0 && a[i][j]>=a[i-1][j]){
				cout<<-1<<endl;
				return 0;
			}
			else if(j>0 && a[i][j]>=a[i][j-1]){
				cout<<-1<<endl;
				return 0;
			}
			ans+=a[i][j];
        }
    }
    cout<<ans<<endl;
    return 0;
}
