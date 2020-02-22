//https://www.codechef.com/STRT2020/problems/PRIMEBIT
#include<bits/stdc++.h>
using namespace std;
//#define ll long long;
long long decimaltoBinary(long long n){
    long long rem, binary=0, revbinary=0;
    for( ; n>0; n=n/2){
        rem = n%2;
        revbinary = revbinary*10 + rem;
    }
    for( ; revbinary>0; revbinary=revbinary/10){
        rem = revbinary%10;
        binary = binary * 10 + rem;
    }
    return binary;
}
long long Sol(long long N){
    //int num = n; 
    int dec_value = 0;
    int base = 0;
    int temp = N;
    while(temp){ 
        int last_digit = temp % 10;
        temp = temp / 10;
        if(last_digit == 1){
            dec_value += base;
        }
        //base = base * 2;
        base++;
    }
    return dec_value;
}
int main(){
    long long T;
    cin>>T;
    while(T--){
        long long X;
        cin>>X;
        long long binary = decimaltoBinary(X);
        //cout<<binary<<endl;
        cout<<Sol(binary)<<endl;
    }
    return 0;
}