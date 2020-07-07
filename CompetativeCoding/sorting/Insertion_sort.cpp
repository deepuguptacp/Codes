//Insertion sort
#include<iostream>
using namespace std;
void Insertion_sorting(int A[], int n){
    for(int i = 0; i <= n-1; i++){
        int v = A[i];
        int j = i;
        while(A[j-1] > v && j >= 1){
            A[j] = A[j-1];
            j--;
        }
        A[j] = v;
    }
}

void print(int A[], int n){
    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i = 0; i < n; i++)
        cin>>A[i];
    Insertion_sorting(A, n);
    print(A, n);
    return 0;
}