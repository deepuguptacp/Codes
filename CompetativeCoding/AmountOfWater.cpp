//https://practice.geeksforgeeks.org/problems/amount-of-water/0/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];
        int height = 0;
        for(int i=1; i<N-1; i++){
            if(H[i]< H[i-1] && H[i] < H[i+1]){
                height += (min(H[i-1], H[i+1]) - H[i]);
            }
        }
        cout<<height<<endl;
    }
    return 0;
}