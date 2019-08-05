#include<iostream>
#include<string.h>
using namespace std;

int main(){
    long long n=0, i=0, temp=0;
    string str = "";
    cin>>n;
    while(n-->0){
        cin>>str;
        for(i=0; i<str.length(); i++){
            if(str.at(i)=='1'){
                temp++;
            }
        }
        if(temp%2!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
