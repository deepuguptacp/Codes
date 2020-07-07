//Selection sort
#include<iostream>
using namespace std;
void Selection_sorting(int A[], int n){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(A[j] < A[min])
                min = j;
        }
        int temp = A[i];
        A[i] = A[min];
        A[min] = temp;
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
    Selection_sorting(A, n);
    print(A, n);
    return 0;
}