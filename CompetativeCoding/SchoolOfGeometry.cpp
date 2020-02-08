//https://www.codechef.com/FEB20B/problems/SNUG_FIT
#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*void makePermutation(ll B[], ll n){
    map<int, int> count;
    for (int i = 0; i < n; i++) 
        count[B[i]]++;
    int next_missing = 1; 
    for (int i = 0; i < n; i++) { 
        if (count[B[i]] != 1 || B[i] > n || B[i] < 1){ 
            count[B[i]]--;
            while (count.find(next_missing) != count.end()) 
                next_missing++;
            B[i] = next_missing;
            count[next_missing] = 1; 
        } 
    } 
}*/
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        ll A[N], B[N], dia=0;
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];
        sort(A, A+N);
        sort(B, B+N);
        for(int i=0; i<N; i++){
            if(A[i]<B[i])
                dia+=A[i];
            else
                dia+=B[i];
        }
        /*makePermutation(B, N);
        for(int i=0; i<N; i++)
            cout<<B[i]<<" ";*/
        cout<<dia<<endl;
    }
    return 0;
}
