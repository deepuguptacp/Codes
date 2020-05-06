/*
Given an array of n numbers, give an algorithm for finding a 
contiguous subsequence A(i)... A(j) for which the sum of elements is maximum.
Example 1 : {-2, 11, -4, 13, -5, 2} → 20 = (11 + -4 + 13)
Example 2 : {1, -3, 4, -2, -1, 6} → 7 = (4 + -2 + -1 + 6)

Solution Approach : 
To find maximum sum we have to do one of the following and select maximum among them.
• Either extend the old sum by adding A[i]
• or start new window starting with one element A[i]

*/

#include<bits/stdc++.h>
using namespace std;

int MaximumSum(vector<int> V){
    int sum = 0;
    int l = V.size();
    int M[l];
    memset(M, 0, sizeof(M));
    if(V[0] > 0){
        M[0] = V[0];
    } else {
        M[0] = 0;
    }
    for(int i = 1; i < l; i++){
        if(M[i-1] + V[i] > 0){
            M[i] = M[i-1] + V[i];
        } else {
            M[i] = 0;
        }
    }
    for(int i = 0; i<l; i++){
        if(M[i] > sum)
            sum = M[i];
    }
    return sum;
}

vector<int> MaxSumNo(vector<int> V){
    vector<int> res;
    int sumSoFar = 0;
    int sumEndingHere = 0;
    for(int i = 0; i < V.size(); i++){
        sumEndingHere += V[i];
        if(sumEndingHere < 0){
            sumEndingHere = 0;
            res.clear();
            continue;
        } else {
                if(sumSoFar < sumEndingHere){
                    sumSoFar = sumEndingHere;
            }
            res.push_back(V[i]);
        }
    }
    //res.push_back(sumSoFar);
    return res;
}

int main(){
    int n;
    cout<<"Enter the number of integers : ";
    cin>>n;
    vector<int> V;
    int k;
    cout<<"Enter the integers : ";
    for(int i = 0; i<n; i++){
        cin>>k;
        V.push_back(k);
    }
    vector<int> p = MaxSumNo(V);
    cout<<"Subsequence returning maximum sum is : ";
    for(int i = 0; i < p.size(); i++){
        cout<< p[i]<<" ";
    }
    cout<<endl;
    cout<<"Maximum contiguous subsequence sum : "<<MaximumSum(V)<<endl;
    return 0;
}