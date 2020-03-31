//https://practice.geeksforgeeks.org/problems/handshakes/0/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int handshake(int n){
    if(n==0)
        return 1;
    else{
        int ways=0;
        for(int i=2; i<=n; i+=2)
            ways += handshake(i-2) * handshake(n-i);
        return ways;
    }
}

int main(){
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<handshake(n)<<endl;
    }
	return 0;
}