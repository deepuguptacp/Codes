#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll A[n];
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin>>A[i];
            mp[A[i]]++;
        }
        if(mp.find(0)->first == 0)
            cout<<mp.size()-1<<endl;
        else
            cout<<mp.size()<<endl;
    }
    return 0;
}