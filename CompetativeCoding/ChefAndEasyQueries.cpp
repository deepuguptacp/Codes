#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll EasyQueries(ll A[], ll n, ll k){
    ll temp = 0;
    ll i;
    for(i = 0; i < n; i++){
        temp += A[i];
        if(temp < k){
            return i + 1;
        } else {
            temp -= k;
        }
    }
    i += temp / k;
    return i+1;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll A[n];
        ll day = 0;
        for(int i = 0; i < n; i++){
            cin>>A[i];
        }
        ll res = EasyQueries(A, n, k);
        cout<<res<<endl;
    }
    return 0;
}