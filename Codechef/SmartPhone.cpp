#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    long long n, i=0, a=0;
    cin>>n;
    vector<long long> arr(n), b;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    for(i=0; i<n; i++){
        b.push_back(arr[i]*(n-i));
    }
    sort(b.begin(), b.end());
    cout<<b[n-1]<<endl;
    return 0;
}