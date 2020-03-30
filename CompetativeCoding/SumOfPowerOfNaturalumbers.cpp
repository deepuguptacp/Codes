//https://practice.geeksforgeeks.org/problems/express-as-sum-of-power-of-natural-numbers/0
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
    cin>>t;
    while(t--){
        int n;
	    int k;
	    cin>>n>>k;
	    vector<int>value;
	    int x=0; 
	    for(int i=0; x<n ; i++){
	        x=pow(i,k);
	        value.push_back(x);
	    }
	    int size=value.size(); 
	    int dp[size][n+1];
	    for(int i=0; i<size; i++){
	        for(int j=0; j<=n; j++){
	            if(j==0)dp[i][j]=1;
	            else if(i==0)dp[i][j]=0;
	            else{
	                int exclude=dp[i-1][j];
	                int include=0;
	                if(j-value[i]>=0){
	                    include=dp[i-1][j-value[i]];
	                }
	                dp[i][j]=exclude+include; 
	            }
	        }
	    }
	    cout<< dp[size-1][n] << endl;
    }
	return 0;
}