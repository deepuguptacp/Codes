#include<bits/stdc++.H>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    int i;
    for(i = 0; i < n; i++){
        cin>>A[i];
    }
    i = 0;
    int j = n-1;
    while(i < j){
        if(A[i] == 0){
            i++;
        }
        if(A[j] == 1){
            j--;
        }
        if(A[i] == 1 && A[j] == 0){
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}