//https://practice.geeksforgeeks.org/problems/coin-change/0/
#include<bits/stdc++.h>
using namespace std;

int Change(int A[], int m, int n){
    // Recursive solution
    /*if (n == 0) 
        return 1;
    if (n < 0) 
        return 0;
    if (m <=0 && n >= 1) 
        return 0;
    return Change(A , m - 1, n ) + Change(A , m, n-A[m-1] );*/
    // DP
    int table[n+1];
    table[0] = 1;
    for(int i=0; i<m; i++)
        for(int j=A[i]; j<=n; j++)
            table[j] += table[j-A[i]];
    return table[n];
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N];
        for(int i=0; i<N; i++)
            cin>>A[i];
        int cent;
        cin>>cent;
        cout<<Change(A, N, cent)<<endl;
    }
    return 0;
}