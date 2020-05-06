/*
Convert the following recurrence to code.
T(0) = T(1) = 2;
T(n) = ∑ 2 * T(i-1) * T(i-2);
*/
#include<bits/stdc++.h>
using namespace std;
int T[1000];
int DP(int n){
    T[0] = 2;
    T[1] = 2;
    for(int i = 2; i<=n; i++){
        T[i] = 2 * T[i-1] * T[i-2];
    }
    return T[n];
}

int main(){
    int n;
    cout<<"Enter the digit : ";
    cin>>n;
    cout<<DP(n)<<endl;
    return 0;
}