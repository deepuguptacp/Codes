//https://codeforces.com/problemset/problem/337/A
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n, m, result=1000;
    cin>>n>>m;
    int a[m];
    vector<int> V(n);
    for(int i=0; i<m; i++)
        cin>>a[i];
    sort(a, a+m);
    for(int i=0; i+n-1<m; i++)
		result = min(result, a[i+n-1] - a[i]);
	cout<<result<<endl;
    
    return 0;
}