//https://practice.geeksforgeeks.org/problems/count-the-elements/0/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N], B[N];
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];
        int Q;
        cin>>Q;
        while(Q--){
            int K;
            cin>>K;
            int temp=0;
            for(int i=0; i<N; i++){
                if(B[i]<=A[K])
                    temp++;
            }
            cout<<temp<<endl;
        }
    }
	
	return 0;
}