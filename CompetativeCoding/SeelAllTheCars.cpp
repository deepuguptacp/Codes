//https://www.codechef.com/APRIL20B/problems/CARSELL
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a, a+n);
        reverse(a, a+n);
        ll res = 0;
        for(int i=0; i<n; i++){
            if(a[i] - i >= 0)
                a[i] -= i;
            else
                a[i] = 0;
            res += a[i];
            //cout<<a[i]<<" ";
        }
        cout<<res%1000000007<<endl;
    }
	return 0;
}
