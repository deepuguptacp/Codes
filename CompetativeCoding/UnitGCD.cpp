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
        vector<int> v;
        vector<int> r;
        v.push_back(1);
        for(int i=2; i<=n; i++){
            if(isPrime(i))
                v.push_back(i);
            else
                r.push_back(i);
        }
        /*cout<<r.size()<<endl;
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";*/
        
        cout<<endl;
    }    
    return 0;
}