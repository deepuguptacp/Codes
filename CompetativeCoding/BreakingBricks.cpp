//https://www.codechef.com/JAN20B/problems/BRKBKS
#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int s, w1, w2, w3;
        cin>>s>>w1>>w2>>w3;
        if(w1+w2+w3 <= s)
            cout<<1;
        else if(w1+w2<=s || w2+w3<=s)
            cout<<2;
        else
            cout<<3;
        cout<<endl;
    }
}