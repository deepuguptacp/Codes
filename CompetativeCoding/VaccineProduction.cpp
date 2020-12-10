#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int D1, V1, D2, V2, P;
    cin>>D1>>V1>>D2>>V2>>P;
    if (D1 > D2) {
        int t = D1;
        D1 = D2;
        D2 = t;
        t = V1;
        V1 = V2;
        V2 = t;
    }
    int days = 0;
    days += D1 - 1;
    if (D1 != D2) {
        int i = D2 - D1;
        if (P > i * V1) {
            days += i;
            P -= i * V1;
            days += ceil(P / ((double) V1 + (double) V2));
        }
        else if (P == i * V1) {
            days += i;
        } else {
            days += ceil(P / ((double) V1));
        }
    } else {
        days += ceil(P / ((double) V1 + (double) V2));
    }
    cout<<days<<endl;
}