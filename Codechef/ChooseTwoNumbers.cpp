#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long int n, m, i=0, x, y;
    cin>>n;
    long long int A[n];
    for(i=0; i<n; i++)
        cin>>A[i];
    cin>>m;
    long long int B[m];
    for(i=0; i<m; i++)
        cin>>B[i];
    for(i=0; i<n; i++){
        x=A[i];
    }
    sort(A, A+n);
    sort(B, B+m);
    cout<<A[n-1]<<" "<<B[m-1]<<endl;
    return 0;
}
