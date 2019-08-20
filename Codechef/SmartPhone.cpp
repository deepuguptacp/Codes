#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    long long n, i, a;
    cin>>n;
    vector<int> arr, b;
    for(i=0; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    for(i=0; i<n; i++){
        b.push_back(arr[i]*(n-i));
    }
    sort(b.begin(), b.end());
    cout<<b[n-1]<<endl;
    return 0;
}