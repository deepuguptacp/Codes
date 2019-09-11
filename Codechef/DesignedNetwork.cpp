#include<iostream>
using namespace std;
#define ll long long
int main(){
    ll T;
    cin>>T;
    //int a[T]={0};
    while(T--){
        ll N, M;
        cin>>N>>M;
        ll i=0, CF = 0;
        //bool flag=false;
        if(M >= N && M < N*(N-1)/2)
            CF = 2;
        else if(M >= N*(N-1)/2 && M < N*(N+1)/2)
            CF = N-1;
        else if(M >= N*(N+1)/2)
            CF = N;
        else
            CF = -1;
        cout<<CF<<endl;
    }

    return 0;
}