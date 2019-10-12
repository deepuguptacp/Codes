//https://www.hackerearth.com/practice/data-structures/stacks/
//basics-of-stacks/practice-problems/algorithm/monk-and-prisoner-of-azkaban/
#include<iostream>
#include<stack>
using namespace std;
#define ll long long
stack<ll> First, Second, third;
void Smaller(ll [], ll);
void Greater(ll [], ll, ll);
int main(){
    First.push('$');
    third.push('$');
    ll N;
    cin>>N;
    ll A[N];
    for(ll i=0; i<N; i++){
        cin>>A[i];
    }
    for(ll i=0; i<N; i++){
        Smaller(A, i);
        Greater(A, i, N);
    }

    while(First.top()!='$'){
        third.push(First.top() + Second.top());
        First.pop();
        Second.pop();
    }
    while(third.top()!='$'){
        cout<<third.top()<<" ";
        third.pop();
    }
    return 0;
}
void Smaller(ll arr[], ll n){
    ll temp=0, temp1=0;
    if(n==0)
        First.push(-1);
    else{
        for(ll i=n-1; i>=0; i--){
            if(arr[i]>arr[n]){
                temp=i;
                temp1=1;
                break;
            }
        }
    }
    if(temp1==1)
        First.push(temp);
    else
        First.push(-1);
    
}
void Greater(ll arr[], ll n, ll N){
    ll temp=0, temp1=0;
    if(n==0)
        Second.push(-1);
    else{
        for(ll i=n; i<N; i++){
            if(arr[i]>arr[n]){
                temp=i;
                temp1=1;
                break;
            }
        }
    }
    if(temp1==1)
        First.push(temp);
    else
        First.push(-1);
}
