//https://www.codechef.com/STRT2020/problems/BOXINBOX
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll N, i,j;
    cin>>N;
    ll A[N][N];
    for(i=0; i<N; i++)
        for(j=0; j<N; j++)
            cin>>A[i][j];
    
    ll sum=0;
    for(j=0;j<N/2;j++){
        int minimum=A[j][j];
        for( i=j;i<N-j;i++)
            if(A[j][i]<minimum)
                minimum=A[j][i];

        for( i=j;i<N-j;i++)
            if(A[i][j]<minimum)
                minimum=A[i][j];

        for(i=N-j-1;i>=j;i--)
            if(A[N-j-1][i]<minimum)
                minimum=A[N-j-1][i];
        
        for(i=N-j-1;i>=j;i--)
            if(A[i][N-j-1]<minimum)
                minimum=A[i][N-j-1];
        
        sum=sum+minimum;
    }
    if(N%2!=0)
        sum=sum+A[N/2][N/2];
    cout<<sum<<endl;
    return 0;
}