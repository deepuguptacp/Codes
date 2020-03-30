//https://practice.geeksforgeeks.org/problems/find-the-closest-pair-from-two-arrays/0/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
void printClosest(int ar1[], int ar2[], int m, int n, int x){
    int diff = INT_MAX;
    int res_l, res_r; 
    int l = 0, r = n-1;
    while (l<m && r>=0){
       if (abs(ar1[l] + ar2[r] - x) < diff){
           res_l = l;
           res_r = r;
           diff = abs(ar1[l] + ar2[r] - x);
       }
       if (ar1[l] + ar2[r] > x)
           r--;
       else
           l++;
    }
    cout<<ar1[res_l]<<" "<< ar2[res_r]; 
} 
*/
int main(){
	int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n], b[m];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<m; i++)
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
        //printClosest(a, b, n, n, x);
        //cout<<endl;
    }
	return 0;
}