//https://practice.geeksforgeeks.org/problems/nth-fibonacci-number/0/
// 1000000007
#include<bits/stdc++.h>
using namespace std;
int k = 1000000007;
long long int Fibo(int n){
    int f[n+2];
    int i;
    f[0] = 0;
    f[1] = 1;
    for(i=2; i<=n; i++){
        f[i] = f[i-1]%k + f[i-2]%k;
    }
    return (f[n] % k);
    /*double phi = (1 + sqrt(5)) / 2; 
    return round(pow(phi, n) / sqrt(5));*/ 
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        cout<<Fibo(N) % 1000000007;
        cout<<endl;
    }
    return 0;
}