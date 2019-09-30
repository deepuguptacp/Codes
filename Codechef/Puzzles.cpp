//https://codeforces.com/problemset/problem/337/A
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++)
        cin>>a[i];
    sort(a, a+m);
    cout<<a[n-1]-a[0]<<endl;
    
    return 0;
}