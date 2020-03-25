//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int A[n], min_jump[n];
        for(int i=0; i<n; i++){
            cin>>A[i];
            min_jump[i]=INT_MAX;
        }
        min_jump[0]=0;
        for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
                if(j + A[j] >= i){
                    min_jump[i]=min(min_jump[i],min_jump[j]+1);
                }
            }
        }
        for(int i=0; i<n; i++){
            if(min_jump[i]==INT_MAX)
	            min_jump[i]=-1;
        }
        if(min_jump[n-1]>0)
	        cout<<min_jump[n-1]<<endl;
	    else
	        cout<<"-1"<<endl;
    }
    return 0;
}