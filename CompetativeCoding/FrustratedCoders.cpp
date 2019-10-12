//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/sniper-shooting/
#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
#define ll long long
int main(){
    ll N, x;
    cin>>N;
    pair<int, int> A[N];
    for(ll i=0; i<N; i++){
        cin>>x;
        A[i].first=x;
        A[i].second=0;
    }
    sort(A, A+N);
    //stack<int> s;
    for(ll i=N-1; i>0; i--){
        ll j=i-1;
        if(A[i].first==A[j].first || A[j].second==1)
            j--;
        if(j>0)
            A[j].second=1;
    }
    ll output=0;
    for(ll i=1; i<N; i++){
        if(A[i].second==0)
            output+=A[i].first;
    }
    cout<<output<<endl;
    return 0;
}