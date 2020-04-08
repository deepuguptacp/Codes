//https://www.codechef.com/APRIL20B/problems/UNITGCD
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
        ll n;
        cin>>n;
        
        cout<<endl;
    }    
    return 0;
}
