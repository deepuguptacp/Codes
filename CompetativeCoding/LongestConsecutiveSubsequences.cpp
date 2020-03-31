//https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence/0/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int findLongestConseqSubseq(int arr[], int n){
    map<int, bool> m;
    for(int i = 0; i < n; i++){
        m[arr[i]] = true;
        if(m.find(arr[i]+1) != m.end()){
            m[arr[i]+1] = false;
        }
        if(m.find(arr[i]-1) != m.end()){
            m[arr[i]] = false;
        }
    }
    map<int, bool> :: iterator it = m.begin();
    int ans = 0;
    while(it != m.end()){
        int temp = 1;
        if(it->second == true){
            map<int, bool> :: iterator itt = m.find(it->first + 1);
            
            while(itt != m.end()){
                temp++;
                itt = m.find(itt->first + 1);
            }
        }
        ans = max(temp, ans);
        it++;
    }
    return ans;
}

int main(){
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        cout<<findLongestConseqSubseq(a, n)<<endl;
        
    }
	return 0;
}