//Heap sort
#include<iostream>
using namespace std;
void Heap_sorting(int A[], int n){

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
    Heap_sorting(A, n);
    print(A, n);
    return 0;
}