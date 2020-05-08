//https://www.codechef.com/MAY20B/problems/CHANDF
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll BitwiseAND(ll X, ll Y, ll Z){
    return (X & Z) * (Y & Z) ;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x, y, l, r;
        cin>>x>>y>>l>>r;
        ll res = 0, temp = 0;
        for(ll i = l; i<=r; i++){
            ll k = BitwiseAND(x, y, i);
            if(k > temp){
                temp = k;
                res = i;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}