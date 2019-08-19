/*
 * C++ Program to find amstron numbers between 1-500. 
*/
#include<iostream>
using namespace std;
/*
 * Main: Conatins Menu
*/
int main(){
    int num, t, a;
    for(t=1; t<500; t++){
        num=t;
        int sum=0;
        while(num){
            a=num%10;
            sum=sum+a*a*a;
            num=num/10;
        }
        if(sum==t)
            cout<<"Amstrong number : "<<t<<"\n";
    }
    return 0;
}