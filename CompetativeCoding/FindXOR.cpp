#include<bits/stdc++.h>
#define int long long
#define ll long long
using namespace std;

signed main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s="000000000000000000000";
        ll x=1048576;
        ll prev;
        if(n%2==0){
            if((n/2)%2==1){
                ll y;
                for(ll i=2,j=2;i<=x;i=i<<1,j++){
                    cout<<1<<" "<<i<<endl;
                    cin>>y;
                    if(i==2){
                        ll ooo=y%2;
                        s[1]=ooo+'0';
                    }
                    else{
                        ll z=y>>(j-1);
                        z=z%2;
                        if(z==prev){
                            s[j-1]='1';
                        }
                        else{
                            s[j-1]='0';
                        }
                    }
                    ll o=y;
                    o=o>>j;
                    prev=o%2;
                }
            }
            else{
                ll y;
                for(ll i=2,j=2;i<=x;i=i<<1,j++){
                    cout<<1<<" "<<i<<endl;
                    cin>>y;
                    if(i==2){
                        ll ooo=y%2;
                        s[1]=ooo+'0';
                    }
                    else{
                        ll z=y>>(j-1);
                        z=z%2;
                        if(z==prev){
                            s[j-1]='0';
                        }
                        else{
                            s[j-1]='1';
                        }
                    }
                    ll o=y;
                    o=o>>j;
                    prev=o%2;
                }
            }
        }
        else{
            if((n/2)%2==0){
                ll y;
                for(ll i=2,j=2;i<=x;i=i<<1,j++){
                    cout<<1<<" "<<i<<endl;
                    cin>>y;
                    if(i==2){
                        ll ooo=y%2;
                        s[1]=ooo+'0';
                    }
                    else{
                        ll z=y>>(j-1);
                        ll mmm=y>>(j-2);
                        mmm=mmm%2;
                        z=z%2;
                        if(z!=prev){
                            s[j-1]=mmm+'0';
                        }
                        else{
                            s[j-1]=1-mmm+'0';
                        }
                    }
                    ll o=y;
                    o=o>>j;
                    prev=o%2;
                }
            }
            else{
                ll y;
                for(ll i=2,j=2;i<=x;i=i<<1,j++){
                    cout<<1<<" "<<i<<endl;
                    cin>>y;
                    if(i==2){
                        ll ooo=y%2;
                        s[1]=ooo+'0';
                    }
                    else{
                        ll z=y>>(j-1);
                        ll mmm=y>>(j-2);
                        mmm=mmm%2;
                        z=z%2;
                        if(z==prev){
                            s[j-1]=mmm+'0';
                        }
                        else{
                            s[j-1]=1-mmm+'0';
                        }
                    }
                    ll o=y;
                    o=o>>j;
                    prev=o%2;
                }
            }
        }
        ll num=0,q=1;
        for(ll i=1;i<=20;i++){
            num=((ll)(s[i]-'0'))*q+num;
            q=q*2;
        }
        cout<<2<<" "<<num<<endl;
        ll rrr;
        cin>>rrr;
    }
}