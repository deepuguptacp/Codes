//https://codeforces.com/contest/1236/problem/B
#include<iostream>
using namespace std;
#define ll long long
const int N = 1e9 + 7;
 
ll power(ll a, ll b){
    ll temp = 1;
    a %= N;
    while(b > 0){
        if(b&1)temp = (temp * a) % N;
        b /= 2;
        a = (a*a)%N;
    }
    return temp;
}
 
int main(){
    ll n, m;
    cin>>n>>m;
    ll ans = power(2, m) - 1;
    ans = power(ans, n);
    cout << ans << '\n';
    return 0;
}