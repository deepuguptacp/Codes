#include<iostream>
using namespace std;
class fibonacci{
    long int f0, f1, fib;
    public :
        fibonacci();//default constructor
        void increment();
        void display();
};
fibonacci :: fibonacci(){ //constructor
    f0=0;
    f1=1;
    fib=f0+f1;
    cout<<f0<<'\t'<<f1<<'\t';
}
void fibonacci :: increment(){
    f0=f1;
    f1=fib;
    fib=f0+f1;
}
void fibonacci :: display(){
    cout<<fib<<'\t';
}
int main(){
    fibonacci number;
    int i;
    for(i=3; i<=10; i++){
        number.display();
        number.increment();
    }
    return 0;
}