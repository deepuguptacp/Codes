//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/stakth-1-e6a76632/
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
#define ll long long
int main(){
    ll N, K, m=0;
    cin>>N>>K;
    ll A[N];
    for(ll i=0; i<N; i++){
       cin>>A[i];
       m = max(m, A[i]);
    }
    if(K==N || (N==1 && K%2 == 1))
        cout<<-1;
    else if(K>N+1)
        cout<<m;
    else{
        m=-1;
        for(ll i=0; i<K-1; i++){
            m = max (m, A[i]);
        }
        cout<<max(m, A[K])<<endl;
    }
    return 0;
}
