//https://www.codechef.com/APRIL20B/problems/COVIDLQ
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int min_val = INT_MAX;
        int temp = 1;
        for(int i=0; i<n; i++){
            if(a[i]==0){
                temp++;
            }
            else{
                min_val = min(min_val, temp);
                temp = 0;
            }
        }
        if(min_val >= 6)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}