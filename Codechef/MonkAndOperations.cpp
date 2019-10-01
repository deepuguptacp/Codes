//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/monk-and-operations/
#include<iostream>
using namespace std;
#define ll long long
int main(){
    ll n, m, i=0, j=0;
    cin>>n>>m;
    int a[n][m];
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin>>a[i][j];
    ll v1, v2, v3, v4;
    cin>>v1>>v2>>v3>>v4;
    ll rsum=0, csum=0;
    for(i=0; i<n; i++){
        ll sum1=0, sum2=0, sum3=0;
        for(j=0; j<m; j++){
            sum1+=abs(a[i][j]);
            sum2+=abs(a[i][j]+v1);
            sum3+=abs(v2);
        }
        rsum+=max(sum1, max(sum2, sum3));
    }
    for(j=0; j<m; j++){
        ll csum1=0, csum2=0, csum3=0;
        for(i=0; i<n; i++){
            csum1+=abs(a[i][j]);
            csum2+=abs(a[i][j]+v3);
            csum3+=abs(v4);
        }
        csum+=max(csum1,max(csum2, csum3));
    }
    cout<<max(rsum, csum)<<endl;
    return 0;

}