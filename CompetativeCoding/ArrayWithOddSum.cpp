//https://codeforces.com/problemset/problem/1296/A
#include<iostream>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int oddCount=0, evenCount=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%2 == 0)
                evenCount++;
            else
                oddCount++;
        }
        if((oddCount==n && n%2==0) || evenCount==n)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}