//https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array/0/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll floor(ll A[], ll n, ll X){
    //ll result = 0;
    for(int i=0; i<n; i++){
        if(A[i] <= X && A[i+1] >= X){
            if(A[i+1]==X)
                return i+1;
            else
                return i;
        }
    }
    return -1;
}

int main(){
	ll t;
    cin>>t;
    while(t--){
        ll n, X;
        cin>>n>>X;
        ll A[n];
        for(ll i=0; i<n; i++)
            cin>>A[i];
        cout<<floor(A, n, X)<<endl;
    }
	return 0;
}