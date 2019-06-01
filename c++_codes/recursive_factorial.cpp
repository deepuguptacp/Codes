#include<iostream>
#include<time.h>
using namespace std;
int factorial(int n){
    if(n<=1)
        return 1;
    else
        return n*factorial(n-1);
}
int main(){
    clock_t start, end;
    start=clock();
    cout<<"5! = "<<factorial(5);
    end=clock();
    cout<<"Time taken : "<<(double)(end-start)/CLOCKS_PER_SEC<<"seconds.";
    return 0;
}