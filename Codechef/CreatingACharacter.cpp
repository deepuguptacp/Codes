//https://codeforces.com/problemset/problem/1217/A
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    int T;
    cin>>T;
    while(T--){
        ll str, integer, exp;
        cin>>str>>integer>>exp;
        ll x = min((int)exp+1, (int)(exp+str-integer+1)/2);
        ll res = max(0, (int)x);
        cout<<res<<endl;
    }
    return 0;
}