//https://practice.geeksforgeeks.org/problems/sum-of-bit-differences/0
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int bitCompare(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < 32; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if ( (arr[j] & (1 << i)) ) 
                count++;
        }
        ans += (count * (n - count) * 2); 
    }
    return ans; 
}
int main(){
	int T;
	cin>>T;
    while(T--){
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0; i<n; i++)
	        cin>>A[i];
	    int temp = bitCompare(A, n);
	    cout<<temp<<endl;
    }
	return 0;
}