//codechef.com/FEB20B/problems/CASH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll N, K;
        cin>>N>>K;
        ll A[N], temp=0;
        for(int i=0; i<N; i++){
            cin>>A[i];
            /*if(A[i] < K)
                temp+=A[i];
            else if(A[i]%K == 0)
                continue;
            else if(A[i]>K && A[i]%K != 0){
                ll l = A[i] % K;
                ll r = K - l;
                if(r > temp){
                    temp += l;
                }
                else
                    temp-=r;
            }*/
            temp+=A[i];
        }
        cout<<(temp%K)<<endl;

    }
    return 0;
}