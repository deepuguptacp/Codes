//https://codeforces.com/problemset/problem/1296/B
#include<iostream>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll s;
        cin>>s;
        cout<<s+((s-1)/9)<<endl;

    }
    return 0;
}