//https://codeforces.com/problemset/problem/1217/C
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long temp=0, l, r, temp2, rem, decimal;
        long long len = s.length(), i=0;
        /*for(i=0; i<len; i++){
            if(s[i] == '1')
                temp++;
        }*/
        for(l=1; l<=len; l++){
            for(r=l; r<=len; r++){
                temp2 = r-l+1;
            }
        }
    }

    return 0;
}