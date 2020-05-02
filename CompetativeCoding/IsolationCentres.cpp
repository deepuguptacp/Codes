//https://www.codechef.com/MAY20B/problems/CORUS
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, q;
        cin>>n>>q;
        string s;
        cin>>s;
        map<char, int> mp;
        int i = 0;
        while(s[i] != '\0'){
            mp[s[i]]++;
            i++;
        }
        while(q--){
            ll c;
            cin>>c;
            map<char, int>::iterator itr;
            ll res = 0;
            for (itr = mp.begin(); itr != mp.end(); itr++){
                if(itr->second > c)
                    res += (itr->second - c);
            }
            cout<<res<<endl;
        }
    }
    return 0;
}