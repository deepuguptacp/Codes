#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int> > v(32);

int higher(int ind, int val){
    int ans =- 1, i = 0, j = v[ind].size() - 1;
    while(i <= j){
        int mid = (i + j) / 2;
        if(v[ind][mid] >= val){
            ans = v[ind][mid];
            j = mid - 1;
        } else {
            i = mid + 1;
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int A[n];
        for(int i = 0; i < n; i++){
            cin>>A[i];
        }
        // int list[32];
        // for(int i = 0; i <= 31; i++){
        //     list[i] = new int();
        // }
        for(int j = 0; j <= 31; j++){
            for(int i = 0; i < n; i++){
                int bit = (A[i] >> j) & 1;
                if(bit == 1){
                    v[j].push_back(i);
                }
            }
       }
        for(int i = 0; i < (n - 1) && x > 0; i++){
            for(int j = 31; j >= 0 && x > 0; j--){
                int bit = (A[i] >> j) & 1;
                if(bit == 1){
                    int hIndex = higher(j, i + 1);
                    hIndex = (hIndex == -1) ? (n - 1) : hIndex;
                    A[i] ^= (1 << j);
                    A[hIndex] ^= (1 << j);
                    --x;
                }
            }
        }
        if(x % 2 == 1 && n == 2){
            A[n - 1] ^= 1;
            A[n - 2] ^= 1;
        }
        for(int i = 0; i < n; i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}