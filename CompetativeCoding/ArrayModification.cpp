//https://www.codechef.com/OCT19B/problems/MARM
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main(){
    int T;
    cin>>T;
    while(T--){
        ll N, K;
        cin>>N>>K;
        ll A[N], B[N];
        for(ll i=0; i<N; i++)
            cin>>A[i];
        for(ll i=0; i<K; i++){
            A[i%N] = (A[i%N] ^ A[N-(i%N)-1]);
        }
        for(ll i=0; i<N; i++)
            cout<<A[i]<<" ";
    }
    return 0;
}