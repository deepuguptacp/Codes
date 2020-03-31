//https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays/0
#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
void MergeSort(int p[], int q[], int x, int y){
    for (int i = y-1; i >= 0; i--){
        int j, last = p[x-1];
        for (j = x-2; j >= 0 && p[j] > q[i]; j--)
            p[j+1] = p[j];
        if (j != x-2 || last > q[i]){ 
            p[j+1] = q[i];
            q[i] = last;
        }
    }
}
*/
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        int p[x], q[y];
        for(int i=0; i<x; i++)
            cin>>p[i];
        for(int i=0; i<y; i++)
            cin>>q[i];
        //MergeSort(p, q, x, y);
        long long int i=0, j=0;
	    while(i<x && j<y){
	        if(p[i]<q[j]){
                cout<<p[i++]<<" ";
            }
	        else{
                cout<<q[j++]<<" ";
            }
	    }
	    while(i<x){
            cout<<p[i++]<<" ";
        }
	    while(j<y){
            cout<<q[j++]<<" ";
        }
	    cout<<endl;
    }
	return 0;
}