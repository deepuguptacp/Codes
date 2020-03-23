//https://practice.geeksforgeeks.org/problems/rotate-a-2d-array-without-using-extra-space/0
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N][N];
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                cin>>A[i][j];
        for(int i=0; i<N; i++)
            for(int j=N-1; j>=0; j--)
                cout<<A[j][i]<<" ";
        cout<<endl;
    }
    return 0;
}