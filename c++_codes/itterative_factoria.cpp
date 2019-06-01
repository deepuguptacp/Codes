#include<iostream>
#include<time.h>
using namespace std;
int factorial(int n, int fact){
    if(n<=1)
        return fact;
    else{
        fact=fact*n;
        return factorial(n-1, fact);
    }
}
int main(){
    clock_t start, end;
    start=clock();
    int fact=1;
    cout<<"5! = "<<factorial(5, fact);
    end=clock();
    cout<<"Time taken : "<<(double)(end-start)/CLOCKS_PER_SEC<<"seconds.\n";
    return 0;
}