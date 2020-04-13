#include<bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& nums) {
    int n = nums.size();
    map<int, int> m;
    int sum = 0;
    int max_len = 0;
    for(int i=0; i<n; i++)
        nums[i] = (nums[i] == 0)? -1: 1;
    for(int i=0; i<n; i++){
        sum += nums[i];
        if(sum == 0)
            max_len = i+1;
        if (m.find(sum + n) != m.end()){ 
            if (max_len < i - m[sum + n]){
                max_len = i - m[sum + n];
            } 
        } else {
            m[sum+n] = i;
        }
    }
    // for (int i = 0; i < n; i++) 
    //     nums[i] = (nums[i] == -1)? 0: 1;
    return max_len;
}

int main(){
    vector<int> V;
    int a;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        V.push_back(a);
    }
    cout<<findMaxLength(V)<<endl;
}