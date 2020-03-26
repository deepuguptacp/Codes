//https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names/1/
#include<bits/stdc++.h>
using namespace std;

void winner(string A[], int n){
    map<string, int> V;
    string temp;
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        V[A[i]]++;
    }
    for(auto x:V){
        if(x.second>max){
            max = x.second;
            temp = x.first;
        }
    }
    cout<<temp<<" "<<max;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string A[n];
        for(int i=0; i<n; i++)
            cin>>A[i];
        winner(A, n);
        cout<<endl;
    }
    return 0;
}