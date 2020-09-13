#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll Chefina(ll n){
    long double res = sqrtl(1ul + 4 * n);
    res = res - 1.0;
    res = res / 2.0;
    return res;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n <= 2){
            cout<<0<<endl;
            continue;
        }
        ll total = n * (n + 1) / 2;
        if(total % 2 != 0){
            cout<<0<<endl;
            continue;
        }
        ll temp = Chefina(total);
        ll k = temp * (temp + 1) / 2;
        if(total / 2 == k){
            ll res = (temp * (temp - 1ul)) / 2l + ((n - temp) * (n - temp - 1ul)) / 2l + (n - temp);
            cout<<res<<endl;
        } else {
            cout<<n - temp<<endl;
        }
    }
    return 0;
}


// ll Combination(ll n){
//     if(n == 1)
//         return 1;
//     return (n * (n - 1) / 2);
// }

// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         ll res = 0;
//         ll total = n * (n + 1) / 2;
//         ll temp = n;
//         ll sum = 0;
//         ll half = (total / 2);
//         if(total % 2 == 0){
//             while(sum < half){
//                 sum += temp;
//                 temp--;
//             }
//             res = n - temp;
//         } else {
//             res = 0;
//         }
//         if(sum != half){
//             cout<<res<<endl;
//         } else {
//             cout<<Combination(res) + Combination(temp)<<endl;
//         }
//     }
//     return 0;
// }
