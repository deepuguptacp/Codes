//https://practice.geeksforgeeks.org/problems/relative-sorting/0
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, p;
        cin>>n>>p;
        int A[n], B[p];
        map<int, int> m;
        for(int i=0; i<n; i++){
            cin>>A[i];
            m[A[i]]++;
        }
        for(int i=0; i<p; i++){
            cin>>B[i];
        }
        sort(A, A+n);
        int temp[1000000];
        map<int,int> :: iterator it,it2,it3;
        int k=0;
        for(int i=0; i<p; i++){
            it2=m.find(B[i]);
            if(it2!=m.end()){
                while(it2->second--){
                    cout<<it2->first<<" ";
                }
            }
        }
        sort(B, B+p);
        for(int i=0; i<n; i++){
            if(!binary_search(B ,B+p, A[i])){
                temp[k++] = A[i];
            }
        }
        sort(temp, temp+k);
        for(int i=0; i<k; i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}