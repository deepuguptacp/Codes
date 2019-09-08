//https://www.codechef.com/SEPT19B/problems/CHEFINSQ
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K, i=0, minsum=0, count=1;
        cin>>N>>K;
        int A[N];
        for(i=0; i<N; i++)
            cin>>A[i];
        sort(A, A + N);
        for(i=0; i<K; i++)
            minsum += A[i];
        int curr_sum = minsum; 
        for (int i=K; i<N; i++){ 
            curr_sum += A[i] - A[i-K];
            if(curr_sum == minsum)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}