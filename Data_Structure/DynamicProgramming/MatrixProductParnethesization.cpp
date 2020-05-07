/*
Given a series of matrices: A1 × A2 × A3 ×. . . × An with their dimensions, 
what is the best way to parenthesize them so that it produces the minimum 
number of total multiplications. Assume that we are using standard matrix 
and not Strassen’s matrix multiplication algorithm.
SOLUTION : 
    Input: Sequence of matrices A1 × A2 × A3 × . . . × An, where Ai is a Pi–1 × Pi. 
        The dimensions are given in an array P. 
            i.e. Dimension of ith matrix is Pi-1 * Pi;
    Goal: Parenthesize the given matrices in such a way that it produces the optimal 
        number of multiplications needed to compute A1 × A2 × A3 × . . . × An.
    (ABC)D = (AB)(CD) = A(BCD) = A(BC)D =.. Find the most optimal among them such
    that we have to make least multiplications.
*/
#include<bits/stdc++.h>
using namespace std;

void MatrixChainOrder(int P[], int length){
    int n = length - 1;
    int M[n][n], S[n][n];
    for(int i = 0; i <= n; i++){
        M[i][i] = 0;
    }
    for(int l = 2; l <= n; l++){
        for(int i = 1; i <= (n - l + 1); i++){
            int j = i + l - 1;
            M[i][j] = INT_MAX;
            for(int k = i; k <= j-1; k++){
                int cost = M[i][k] + M[k+1][j] + P[i-1] * P[k] * P[j];
                if(cost < M[i][j]){
                    M[i][j] = cost;
                    S[i][j] = k;
                }
            }
        }
    }
    cout<<M[n-1][n-1]<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of Matrices : ";
    cin>>n;
    n *= 2;
    int P[n];
    cout<<"Enter the dimension of each Mtrix : ";
    for(int i=0; i<n; i++){
        cin>> P[i];
    }
    MatrixChainOrder(P, n);
    return 0;
}