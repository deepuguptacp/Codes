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
        int count = 1;
        int i=0;
        int min_val = INT_MAX;
        while(a[i]==0){
            i++;
        }
        for(int i=0; i<n; i++){
            if(a[i]==1){
                int j=i+1;
                while(a[j] == 0){
                    count++;
                    j++;
                }
                min_val = min(min_val, count);
                i=j+1;
            }
        }
        if(min_val >= 6)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        //cout<<min_val<<endl;
    }
    return 0;
}