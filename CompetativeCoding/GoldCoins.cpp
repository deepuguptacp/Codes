#include<bits/stdc++.h>
#define ll long long 

using namespace std;
map<ll,ll> mp;
ll ans=0;

ll func(ll n){
	if(n==0){
		return 0;
	}
	else if(mp[n]!=0){
		return mp[n];
	}
	ans=func(n/2)+func(n/3)+func(n/4);
	if(ans>n)
		mp[n]=ans;
	else
		mp[n]=n;
	return mp[n];
}

int main(){
	ll n;
	while(cin>>n){
		cout<<func(n)<<endl;
	}
    return 0;
}