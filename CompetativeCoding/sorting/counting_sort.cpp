#include<bits/stdc++.h>
using namespace std;

void count_sorting(int A[], int n, int B[]){
    int c[n];
    for(int i = 0; i < n; i++){
        c[i] = 0;
    }
    for(int i = 0; i < n; i++){
        c[A[i]] = c[A[i]] + 1;
    }
    for(int i = 1; i < n; i++){
        c[i] = c[i] + c[i-1];
    }
    for(int j = n-1; j >= 0; j--){
        B[c[A[j]]] = A[j];
        c[A[j]]--;
    }
}

void print(int B[], int n){
    for(int i = 0; i < n; i++){
        cout<<B[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int A[n];
    int B[n];   // Output array
    for(int i = 0; i < n; i++)
        cin>>A[i];
    count_sorting(A, n, B);
    print(B, n);
    return 0;
}