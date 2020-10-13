#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MAX 200000
#define pb push_back
#define mp make_pair
 
ll root_node[MAX];
vector<pair<ll, pair<int, ll> > > V;
 
ll get_root(ll node){
 
	if(node == root_node[node]) 
	    return node;
 
	return root_node[node] = get_root(root_node[node]);
}
 
int main(){
    ll N, D;
    cin>>N>>D;
    vector<ll> Check;
    ll temp = 0;
    for(ll i = 0; i < N; i++){
        for(ll j = 0; j < D; j++){
            ll k;
            cin>>k;
            temp += k;
        }
        Check.push_back(temp);
    }
    V.clear();
    for(ll i = 0; i < N + 1; i++){
		root_node[i] = i;
	}
    for(ll i = 0; i < N; i++){
        for(ll j = i + 1; j < N; j++){
            V.pb(mp(abs(Check[i] - Check[j]), mp(i, j)));
        }
    }
    sort(V.begin(), V.end());
	reverse(V.begin(), V.end());
	ll ans = 0;
    for(auto it : V){
	    ll w = it.first;
	    ll u = it.second.first;
	    ll v =  it.second.second;
        ll root_u = get_root(u);
	    ll root_v = get_root(v);
	    if(root_u != root_v){
		    root_node[root_u] = root_v;
		    ans += w;
		}
	}
	cout<<ans<<'\n';
    return 0;
}