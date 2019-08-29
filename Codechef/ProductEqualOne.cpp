#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long int n, i=0, temp=0, A=0, B=0;
    cin>>n;
    long long int a;
    for(i=0; i<n; i++){
        cin>>a;
        if(a<0){
            temp=temp-a-1;
            B++;
        }
        else if(a>0){
            temp = temp + a -1;
        }
        if(a==0){
            A++;
            temp++;
        }
    }
    if(B%2 != 0 && A==0)
        temp += 2;
    cout<<temp<<endl;
    return 0;
}