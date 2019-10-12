//https://www.codechef.com/OCT19B/problems/SAKTAN
#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int M, N, Q;
        cin>>N>>M>>Q;
        int A[N][M];
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++)
                A[i][j]=0;
        }
        while(Q--){
            int X, Y;
            cin>>X>>Y;
            for(int i=0; i<M; i++){
                A[X-1][i]++;
            }
            for(int i=0; i<N; i++){
                A[i][Y-1]++;
            }
        }
        int temp=0;
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(A[i][j]%2!=0)
                    temp++;
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}