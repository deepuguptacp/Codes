//https://practice.geeksforgeeks.org/problems/magnet-array-problem/0
#include<bits/stdc++.h>
using namespace std;
#define ll long long

double mf(double mid, int *arr, int N){
	double ans=0;
	for(int i=0;i<N;i++){
		ans+=(1/(mid-arr[i]));
	}
	return ans;
}

double ZeroLocation(int *arr, int N, double left, double right){
	double mid;
	while(left<right){
		mid=(left+(right-left)/2);
		double magfi=mf(mid, arr, N);
		if(abs(magfi) < 0.0000000000001)
			return mid;
		else if (magfi > 0){
			return ZeroLocation(arr, N, mid, right);
		}
        else return ZeroLocation(arr, N, left, mid);
	}
	return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int M[n];
        for(int i=0; i<n; i++)
            cin>>M[i];
        for(int i=1;i<n;i++){
			cout<<ZeroLocation(M, n, M[i-1], M[i])<<" ";
		}
		cout<<endl;
    }
	return 0;
}