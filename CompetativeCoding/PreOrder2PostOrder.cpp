//https://practice.geeksforgeeks.org/problems/preorder-to-postorder/0
#include<bits/stdc++.h>
using namespace std;

void Print(int A[], int n, int min_val, int max_val, int& index){
    if(index == n)
        return;
    if(A[index] < min_val || A[index] > max_val)
        return;
    int val = A[index];
    index++;
    Print(A, n, min_val, val, index);
    Print(A, n, val, max_val, index);
    cout<<val<<" ";
}

void PostOrder(int A[], int n){
    int index = 0;
    Print(A, n, INT_MIN, INT_MAX, index);
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
        PostOrder(A, N);
        cout<<endl;
    }
    return 0;
}