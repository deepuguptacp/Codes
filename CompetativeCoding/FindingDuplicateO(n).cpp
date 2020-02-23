#include<bits/stdc++.h>
using namespace std;
int duplicates(int A[], int n){
    for(int i=0; i<n; i++){
        if(A[abs(A[i])] < 0)
            return 1;
        else
            A[abs(A[i])] = -A[A[i]];
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the number of elements : ";
        cin>>n;
        int A[n];
        cout<<"Enter the elements : ";
        for(int i=0; i<n; i++)
            cin>>A[i];
        int flag = duplicates(A, n);
        if(flag==1)
            cout<<"Duplicate Exists."<<endl;
        else
            cout<<"No duplicates found."<<endl;
    }
    return 0;
}
