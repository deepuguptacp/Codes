#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int T;
	cin>>T;
	while(T--){
	    int N, K;
	    cin>>N>>K;
	    int A[N];
	    for(int i=0; i<N; i++)  
	        cin>>A[i];
	    sort(A, A+N);
	    for(int i=0; i<N; i++)
	        cin>>A[i]>>" ";
	}
	return 0;
}