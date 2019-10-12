//https://www.codechef.com/OCT19B/problems/MSV
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    int T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        ll A[N];
        for(ll i=0; i<N; i++)
            cin>>A[i];
        int temp;
        ll V[N];
        for(ll i=0; i<N; i++){
            temp=0;
            for(ll j=0; j<i; j++){
                if(A[j]%A[i]==0)
                    temp++;
            }
            V[i]=temp;
        }
        sort(V, V+N);
        cout<<V[N-1]<<endl;
    }


    return 0;
}