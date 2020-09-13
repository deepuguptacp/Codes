#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long

ll PowerFun(ll a, ll b){
    ll res = 1;
    while(b){
        if(b & 1){
            res = res * a % MOD;
        }
        b = b / 2;
        a = a * a % MOD;
    }
    return res;
}
ll Division(ll a, ll b){
    ll res = (a * (PowerFun(b, MOD - 2))) % MOD;
    return res;
}
ll Chefina(ll a, ll b){
    ll res = 1;
    ll temp = min(b, a - b);
    for(int i = 0; i < temp; i++){
        res = (res * (a - i)) % MOD;
        res = Division(res, i + 1);
    }
    return res % MOD;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll A[n], res;
        for(ll i = 0; i < n; i++)
            cin>>A[i];
        ll maxRes = 0, maxValue = 0;
        for(int i = 0; i < n; i++){
            if(maxRes < A[i])
                maxRes = A[i];
        }
        for(int i = 0; i < n; i++){
            if(maxRes == A[i])
                maxValue++;
        }
        if(n == 1){
            cout<<2<<endl;
            continue;
        }
        if(maxValue % 2 != 0){
            res = PowerFun(2, n) % MOD;
        } else {
            res = (PowerFun(2, n) - ((PowerFun(2, n - maxValue)) * Chefina(maxValue, maxValue / 2))) % MOD;
        }
        if(res < 0){
            res = (res + MOD) % MOD;
        }
        cout<<res % MOD<<endl;
    }
    return 0;
}