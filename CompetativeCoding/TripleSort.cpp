//https://www.codechef.com/MAY20B/problems/TRPLSRT
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int MinNum(int num){
        int x;
        string n = to_string(num);
        if(n[0] != '1'){
            x = n[0];
            for(int i=0; i<n.length(); i++){
                if(n[i] == x)
                    n[i] = '1';
            }
        } else if(n[0] == '1') {
            x = n[1];
            for(int i=1; i<n.length(); i++){
                if(n[i] == x)
                    n[i] = '0';
            }
        }
        return stoi(n);
    }
int main(){
    // int t;
    // cin>>t;
    // while(t--){
    //     ll n, k;
    //     cin>>n>>k;
    //     ll p[n];
    //     for(int i=0 ; i<n; i++)
    //         cin>>p[i];
        
    // }
    int n;
    cin>>n;
    cout<<MinNum(n)<<endl;
    return 0;
}