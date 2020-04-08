//https://www.codechef.com/APRIL20B/problems/STRNO
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll n){
    ll temp=n;
    ll a = 2;
    ll power = 1;
    while (temp>0){
        ll lastbit = temp&1;
        if(lastbit != 0)
            power *= a;
        a *= a;
        temp>>=1;
    }
    return power;
}

bool numberOfPrimeFactors(ll n, ll k){
    ll count=0;
	while (n%2 == 0){
        count++;
		n /= 2; 
	}
	for (ll i=3; i*i<=n; i=i+2){ 
		while (n%i == 0){
			n = n/i;
            count++;
		}
	}
	if (n > 2)
        count++;
	if (count < k){ 
		return false;
	}
    return true;
} 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x, k;
        cin>>x>>k;
        if(power(k) > x){
            cout<<0<<endl;
        }
        else{
            bool n = numberOfPrimeFactors(x,k);
            if(n)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
    }
    return 0;
}