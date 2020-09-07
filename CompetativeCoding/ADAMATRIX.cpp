#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll A[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>A[i][j];
            }
        }
        int temp = 0;
        int i = 1;
        while(i != n){
            if(A[0][i] != i+1){
                while(A[0][i] != i+1 && i != n){
                    i++;
                }
                temp++;
            } else {
                while(A[0][i] == i+1 && i != n){
                    i++;
                }
                temp++;
            }
        }
        if(A[0][n-1] == n){
            cout<<temp-1<<endl;
        } else {
            cout<<temp<<endl;
        }
    }
    return 0;
}