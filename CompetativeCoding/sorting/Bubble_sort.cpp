//Bubble sort
#include<iostream>
using namespace std;
void bubble_sorting(int A[], int n){
    int swapped = 1;
    int temp;
    for(int pass = n-1; pass >= 0 && swapped; pass--){
        swapped = 0;
        for(int i = 0; i <= pass-1; i++){
            if(A[i] > A[i+1]){
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                swapped = 1;
            }
        }
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
    bubble_sorting(A, n);
    print(A, n);
    return 0;
}