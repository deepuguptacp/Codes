//https://www.codechef.com/FEB20B/problems/THEATRE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// 12 - P, 3 - Q, 6 - R, 9 - S
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        map<char, map<int, int> > V;
        for(int i=0; i<N; i++){
            int it;
            char c;
            cin>>c>>it;
            V[c][it]++;
        }
        /*for (auto &&i : V)
        {
            cout<<i.first<<" ";
            for (auto &&j : i.second)
            {
                cout<<j.first<<"= "<<j.second<<" ";
            }
            cout<<endl;
        }*/
        for(auto itr = V.begin(); itr!=V.end(); itr++){
            for (auto itr2 =itr->second.begin(); itr2!=itr->second.end(); itr2++){
                cout<<itr->first<<" "<<itr2->first<<"="<<itr2->second<<" ";
            }
            cout<<endl;
        }
        
        

    }
    return 0;
}