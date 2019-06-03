#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
    int n;              
    cin>>n;                     //No of AP's
    int a[n], d[n], p[n], i;
    for(i=0; i<n; i++)          //First term, Common difference and power of each AP
        cin>>a[i]>>d[i]>>p[i];
    int m, mul=1;
    cin>>m;                     //No of operations
    for(i=0; i<n; i++){
        mul*=a[i];
    }
    
    return 0;
}