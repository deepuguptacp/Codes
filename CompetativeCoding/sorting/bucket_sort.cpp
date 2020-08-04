#include<bits/stdc++.h>
using namespace std;

void bucket_sorting(int A[], int n){
    vector<int> b[n];
    for(int i = 0; i < n; i++){ 
       int temp = n * A[i];
       b[temp].push_back(A[i]);
    }
    for(int i = 0; i < n; i++)
       sort(b[i].begin(), b[i].end());
    int index = 0;
    for(int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            A[index++] = b[i][j];
}

void print(int A[], int n){
    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++){
        cin>>A[i];
    }
    bucket_sorting(A, n);
    print(A, n);
    cout<<endl;
    return 0;
}