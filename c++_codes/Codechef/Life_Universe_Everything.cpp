//Stop taking input after reading the number 42.
#include<iostream>
using namespace std;

int main(){
    int a[100], i, count=0;
    while(1){
        cin>>a[i];
        if(a[i]==42){
            for(i=0; i<count; i++){
                cout<<a[i]<<"\n";
            }
            exit(1);
        }
        else{
            i++;
            count++;
        }
    }
}