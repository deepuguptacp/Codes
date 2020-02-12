#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N];
        for(int i=0; i<N; i++)
            cin>>A[i];
        int K;
        cin>>K;
        sort(A, A+N);
        cout<<A[K-1]<<endl;
    }
	
	return 0;
}