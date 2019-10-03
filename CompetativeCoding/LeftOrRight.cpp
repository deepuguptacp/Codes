//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/left-or-right-92c0b54c/
#include<iostream>
using namespace std;
#define ll long long
int main(){
    ll N, Q;
    int i=0;
    cin>>N>>Q;
    ll A[N];
    for(i=0; i<=N; i++){
        cin>>A[i];
        A[i]-=1;
    }
    while(Q--){
        ll Y, Z;
        char D;
        ll flag1=0, flag2=0, moves=0, temp=0;
        cin>>Y>>Z>>D;
        Y-=1;
        Z-=1;
        for(i=0; i<N; i++){
            if(Y==A[i]){
                flag1=1;
                temp=i;
            }
            else if (Z==A[i])
                flag2=1;
            else
                continue;
        }
        if(flag1==1 && flag2==1){
            if(D=='L'){
                while(A[temp]!=Z){
                    moves++;
                    temp=(temp-1+N)%N;
                }
            }
            else if(D=='R'){
                while(A[temp]!=Z){
                    moves++;
                    temp=(temp+1)%N;
                }
            }
            else{
                break;
            }
        }
        if(flag1==1 || flag2==1)
            cout<<moves<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}