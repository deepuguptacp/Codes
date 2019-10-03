//https://www.spoj.com/problems/CRDS/
#include<iostream>
using namespace std;
#define ll long long
ll result(ll n){
    if(n==0)
        return 0;
    else{
        return (2*n+n-1)+result(n-1);
    }
    
}

int main(){
    int T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        cout<<result(N)%1000007<<endl;
    }
    return 0;
}