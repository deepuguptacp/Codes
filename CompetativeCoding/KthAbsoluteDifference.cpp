#include<bits/stdc++.h>
using namespace std;

int CountPairs(int *a, int n, int mid){
    int res = 0;
    for (int i = 0; i < n; ++i){
        res += upper_bound(a+i, a+n, a[i] + mid) -  (a + i + 1);
    }
    return res;
}

int kthSmallest(int A[], int n, int k){
    sort(A, A+n);
    int low = A[1] - A[0];
    for(int i = 1; i <= n - 2; i++){
        low = min(low, A[i+1] - A[i]);
    }
    int high = A[n - 1] - A[0];
    while(low < high){
        int mid = (low + high) / 2;
        if(CountPairs(A, n, mid) < k){
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int main(){
    int k, n;
    cin>>k>>n;
    int A[n];
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }
    cout<<kthSmallest(A, n, k)<<endl;
    return 0;
}