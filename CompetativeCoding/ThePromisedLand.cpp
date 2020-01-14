#include<iostream>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll N, M;
        cin>>N>>M;
        ll X, Y, S;
        cin>>X>>Y>>S;
        ll rows[X], column[Y], rs1=0, rs2=0;
        ll j=0;
        while(X--){
            int a;
            cin>>a;
            rs1 += (a-j-1)/S;
            j=a;
        }
        rs1 += (N-j)/S
        j=0;
        while(Y--){
            int b;
            cin>>b;
            rs2 += (b-j-1)/S;
            j=b;
        }
        rs2 += (M-j)/S;
        cout<<rs1 * rs2<<endl;
    }
    return 0;
}