#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll a[n];
        int temp = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a, a+n, greater<int>());
        for(int i = 0; i < n; i++){
            if(k % a[i] == 0){
                temp = a[i];
                break;
            }
        }
        if(temp == 0){
            cout<<"-1"<<endl;
        } else {
            cout<<temp<<endl;
        }
    }
    return 0;
}