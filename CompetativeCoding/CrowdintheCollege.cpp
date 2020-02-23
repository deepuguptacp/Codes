//https://www.codechef.com/STRT2020/problems/CRWDCN
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int T;
    cin>>T;
    while(T--){
        ll x,y,z,n;
		cin>>n;
		cin>>x>>y>>z;
		ll v=(x*y)/__gcd(x,y);
		cout<<(n*24*__gcd(v,z))/(v*z)<<endl;
        
    }
    return 0;
}