//https://practice.geeksforgeeks.org/problems/get-min-at-pop/1/
#include <bits/stdc++.h>
using namespace std;

stack<int>_push(int arr[],int n);

void _getMinAtPop(stack<int>s);

stack<int>_push(int arr[],int n){
    stack<int> s;
    int m = INT_MAX;
    for(int i=0; i<n; i++){
        s.push(arr[i]);
        m = min(arr[i], m);
        s.push(m);
    }
    return s;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int>s){
    // your code here
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
        s.pop();
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    cout<<endl;  
	}
	return 0;
}
/*
You are given an array A of size N. You need to push the elements of the array into a stack and then print minimum in the stack at each pop.
For Input:
2
5
1 2 3 4 5
7
1 6 43 1 2 0 5
Your Output is:
1 1 1 1 1 
0 0 1 1 1 1 1 
*/