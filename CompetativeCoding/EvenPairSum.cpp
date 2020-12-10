#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        ll A, B;
        cin>>A>>B;
        ll EvenA = A / 2;
        ll OddA = A - EvenA;
        ll EvenB = B / 2;
        ll OddB = B - EvenB;
        cout<<(EvenA * EvenB) + (OddA * OddB)<<endl;
    }
    return 0;
}