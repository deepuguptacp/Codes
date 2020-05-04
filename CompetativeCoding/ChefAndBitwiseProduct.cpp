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
        ll z;
        if(l == r){
            z = l;
        }
        else if((r - l) == 1){
            if(BitwiseAND(x, y, l) >= BitwiseAND(x, y, r)){
                z = l;
            } else {
                z = r;
            }
        } else {
            if ((BitwiseAND(x, y, r-1)) > (BitwiseAND(x, y, r-2)))
            z = r-1; 
        else
            z = r-2; 
        }

        cout << z << endl;
    }
    return 0;
}