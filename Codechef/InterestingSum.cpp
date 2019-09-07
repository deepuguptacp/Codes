//https://www.codechef.com/SEPT19B/problems/CHEFINSQ
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K, i=0, temp=0, j=0, sum=0, minsum=0;
        cin>>N>>K;
        int A[N];
        for(i=0; i<N; i++)
            cin>>A[i];
        sort(A, A + N);
        for(i=0; i<K; i++)
            minsum += A[i];
        
    }
    return 0;
}