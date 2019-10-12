// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/
//practice-problems/algorithm/a-game-of-numbers-1-5d3a8cb3/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll i=0,j;
    ll ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    map <ll,ll> f;
    vector<ll> g;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(ar[j]>ar[i]){
                // cout<<"index="<<j<<" "<<ar[j]<<" ";
                f[i]=j;
                break;
            }
        }
        if(j==n){
            // cout<<"index="<<-1<<" "<<ar[i]<<" ";
            f[i]=-1;
        }
    }
    // for (auto &&i : f)
    // {
    //     cout<<i.second<<" ";
    // }
    // cout<<endl;
    for(auto itr=f.begin();itr!=f.end();itr++){
        if(itr->second==-1){
            g.push_back(-1);
            continue;
        }
        for(j=(itr)->second;j<n;j++){
            if(ar[j]<ar[itr->second]){
                g.push_back(ar[j]);
                break;
            }
        }
        if(j==n){
            g.push_back(-1);
        }
    }
    for(auto itr=g.begin();itr!=g.end();itr++){
        cout<<*itr<<" ";
    }
    return 0;
}
test.cpp
Displaying test.cpp.