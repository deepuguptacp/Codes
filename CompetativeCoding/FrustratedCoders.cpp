//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/sniper-shooting/
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
#define ll long long
int main(){
    ll N;
    cin>>N;
    int A[N];
    for(ll i=0; i<N; i++)
        cin>>A[i];
    sort(A, A+N);
    stack<int> s;
    s.push(A[0]);
    for(ll i=1; i<N; i++){
        if(s.top()<A[i]){
            s.pop();
            s.push(A[i]);
        }
        else if(s.top()==A[i]){
            ll temp=s.top();
            s.pop();
            s.pop();
            s.push(temp);
        }
    }
    ll output=0;
    while(s.top()!='\0'){
        output+=s.top();
        s.pop();
    }
    cout<<output<<endl;
    return 0;
}