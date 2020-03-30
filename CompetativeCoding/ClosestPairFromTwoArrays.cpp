//https://practice.geeksforgeeks.org/problems/find-the-closest-pair-from-two-arrays/0/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n], b[m];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        int x;
        cin>>x;
        sort(a, a+n);
        sort(b, b+m);
        int g = 0, h = 0;
        int min = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(abs(a[i]+b[j]-x) < min){
                    min = abs(a[i] + b[j] - x);
                    g = a[i];
                    h = b[j];
                }
            }
        }
        cout<<g<<" "<<h<<endl;
    }
	return 0;
}