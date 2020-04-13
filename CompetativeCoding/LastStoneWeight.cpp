#include<bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& stones) {
    int n = stones.size();
    while(n > 1){
        sort(stones.begin(), stones.end());
        if(stones[n-1] != stones[n-2]){
            stones[n-2] = abs(stones[n-1] - stones[n-2]);
            n-=1;        
        } else {
            n-=2;
        } 
        stones.resize(n);
    }
    if(n<=0){
        return 0;
    } else {
        return stones[0];
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> V;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        V.push_back(a);
    }
    cout<<lastStoneWeight(V)<<endl;
    return 0;
}