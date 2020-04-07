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
        //int temp = 0;
        if(k == 1 && x >= 2)
            cout<<1<<endl;
        else if(k == 2 && x >= 4 && !isPrime(x)){
            cout<<1<<endl;
        }
        
        
        else
            cout<<0<<endl;
    }
    return 0;
}