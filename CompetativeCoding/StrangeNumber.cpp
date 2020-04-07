//https://www.codechef.com/APRIL20B/problems/STRNO
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x, k;
        cin>>x>>k;
        ll temp = 0;
        for(int i=2; i<=x; i++){
            if(isPrime(i) && x%i == 0)
                temp++;
        }
        if(temp==k)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        //cout<<temp<<endl;
    }
    return 0;
}