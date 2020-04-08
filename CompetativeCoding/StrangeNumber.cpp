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

int numberOfPrimeFactors(int n){
    int count = 0;
    if(n%2 == 0){
        count++; 
        n >>= 1;
    }
    for(ll i=3; i<=sqrt(n); i+=2){
        if(n%i == 0){
            count++;
            n = n/i;
        }
    }
    if(n>2)
        count++;
    return count;
    
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x, k;
        cin>>x>>k;
        if(k == 1 && x >= 2)
            cout<<1<<endl;
        else if(k==2 && x >= 4){
            if(!isPrime(x))
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
        else if(k < x && x >= pow(2, k)){
            int n = numberOfPrimeFactors(x);
            if(n == k)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
        else
            cout<<0<<endl;
    }
    return 0;
}