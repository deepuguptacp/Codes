#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int FindXOR(){
    ll n, res = 0;
    cin>>n;
    vector<ll> v;
    ll temp;
    for(ll k = 1; k <= 20; k++){
        cout<<k<<" "<<(1ul << k)<<endl;
        cout.flush();
        cin>>temp; 
        v.push_back(temp);
    }
    reverse(v.begin(), v.end());
    ll a = v[0] - n * (1ul << 20);
    for(ll i = 1; i < v.size(); i++){
        if(v[i] >= a){
            v[i] = ((n - (v[i] - a) / (1ul << (v.size() - i))) / 2);
        }
    }
    for(ll i = 1; i < v.size(); i++){
        if(v[i] % 2 != 0){
            res += 1ul << (v.size() - 1);
        }
        if(a % 2 != 0){
            res++;
        }
        cout<<2<<" "<<res<<endl;
        cout.flush();
        ll d;
        cin>>d;
        return d;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        if(!FindXOR())
            break;
        cout<<endl;
        cout.flush();
    }
    return 0;
}