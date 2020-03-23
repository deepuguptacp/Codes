//https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0
#include <iostream>
using namespace std;
#define ll long long
int main() {
	int T;
	cin>>T;
	while(T--){
	    ll N, D;
	    cin>>N>>D;
	    ll A[N];
	    for(int i=0; i<N; i++)
	        cin>>A[i];
	    ll B[N];
	    for(int i=0; i<N; i++){
	        B[i]=A[(i+D)%N];
	        cout<<B[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}