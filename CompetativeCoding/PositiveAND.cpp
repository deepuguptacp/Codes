#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check2n(ll x){
    return x && (!(x & (x - 1)));
}

int main(){
	ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v;
        v.push_back(2);
        v.push_back(3);
        v.push_back(1);
        v.push_back(5);
        v.push_back(4);
        //ll temp = n;
        if(check2n(n) && n != 1){
            cout<<"-1";
        } else {
            if(n == 1){
                cout<<1;
            }
            else if(n > 1 && n <= 5){
                ll i = 0;
                while(n--){
                    cout<<v[i++]<<" ";
                }
            } else {
                ll j = 0;
                while(j < 5){
                    cout<<v[j]<<" ";
                    j++;
                }
                j++;
                while(j <= n){
                    if(check2n(j)){
                        cout<<j+1<<" "<<j<<" ";
                        j++;
                    } else {
                        cout<<j<<" ";
                    }
                    j++;
                }
            }
        }
        cout<<endl;
    }
	return 0;
}
