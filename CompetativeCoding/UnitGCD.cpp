//https://www.codechef.com/APRIL20B/problems/UNITGCD
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n<=3){
			cout<<"1"<<endl;
			cout<<n<<" ";
			for(int i=1;i<=n;i++)
				cout<<i<<" ";
			    cout<<endl;
		}
		else if(n%2==1){
			ll time=((n-3)/2)+1;
			cout<<time<<endl;
			cout<<"3"<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
			for(int i=4;i<n;i+=2)
				cout<<"2"<<" "<<i<<" "<<(i+1)<<endl;
		} else {
			cout<<(n/2)<<endl;
			for(int i=1;i<n;i+=2)
				cout<<"2"<<" "<<i<<" "<<(i+1)<<endl;
		}
	}
	return 0;
}
