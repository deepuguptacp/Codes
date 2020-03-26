//https://practice.geeksforgeeks.org/problems/subarray-range-with-given-sum0128/1/
#include<bits/stdc++.h>
using namespace std;

int SubArraySum(int A[], int n, int sum){
    map <int, int> m;
    int pre_sum = 0;
    int count =0;
    for(int i=0; i<n; i++){
        pre_sum += A[i];
        if(pre_sum == sum) count++;
            if(m.find(pre_sum - sum) != m.end()) 
                count += m.find(pre_sum - sum)->second;
            m[pre_sum]++;
    }
    return count;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0; i<n; i++)
            cin>>A[i];
        int sum;
        cin>>sum;
        cout<<SubArraySum(A, n, sum)<<endl;
    }
    return 0;
}