//https://www.codechef.com/FEB20B/problems/THEATRE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        map<char, int> m[N];
        for(int i=0; i<N; i++){
            cin>>m[i].first();
            cin>>m[i].second();
        }
        for(int i=0; i<N; i++){
            cout<<m[i].first()<<" ";
            cout<<m[i].second()<<endl;
        }


    }
    return 0;
}