//https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        ll A[N];
        for(ll i=0; i<N; i++)
            cin>>A[i];
        ll m, temp=INT_MAX;
        cin>>m;
        sort(A, A+N);
        ll k = N-m+1;
        //ll B[k];
        for(ll i=0; i<k; i++){
            if((A[i+m-1] - A[i])< temp)
                temp = A[i+m-1] - A[i];
        }
        //sort(B, B+k);
        cout<<temp<<endl;
    }
	return 0;
}