//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/
//practice-problems/algorithm/a-game-of-numbers-1-5d3a8cb3/
#include<iostream>
#include<stack>
using namespace std;
#define ll long long
void nextGreater(ll [], int, ll [], char);
void nextsmallertonextgreater(ll [], int);
int main(){
    int n;
    cin>>n;
    ll A[n];
    for(int i=0; i<n; i++)
        cin>>A[i];
    nextsmallertonextgreater(A, n);

    return 0;
}
void nextsmallertonextgreater(ll arr[], int n){
    ll NG[n];
    ll RS[n];
    nextGreater(arr, n, NG, 'G');
    nextGreater(arr, n, RS, 'S');
    for(int i=0; i<n; i++){
        if(NG[i] != -1 && RS[i] != -1)
            cout<<arr[RS[NG[i]]]<<endl;
        else
            cout<<-1<<endl;        
    }
}

void nextGreater(ll arr[], int n, ll next[], char order){
    stack<ll> s;
    for(int i=n-1; i>=0; i--){
        while(!s.empty() && ((order=='G')? arr[s.top()<=arr[i]] : arr[s.top()>=arr[i]]))
            s.pop();
        if(!s.empty())
            next[i]=s.top();
        else
            next[i] = -1;
        s.push(i);
    }
}
