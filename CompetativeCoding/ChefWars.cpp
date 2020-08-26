#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll H, P;
        cin>>H>>P;
        while(P){
            H -= P;
            P /= 2;
        }
        if(H <= 0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}