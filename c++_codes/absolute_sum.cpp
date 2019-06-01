#include<iostream>
using namespace std;
int main(){
    int a, b, p;
    while(1){
        cout<<"\n1. Continue\n2. END\nInput : ";
        cin>>p;
        switch(p){
            case 1:
            cin>>a;
            cin>>b;
            cout<<abs(a-b)<<"\n";
            break;
            case 2:
            exit(1);
        }
    } 
}