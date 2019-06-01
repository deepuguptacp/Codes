//Finding two numbers if their SUM amd PRODUCT is given.
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int S, P, a, b, c;
    cout<<"Enter the SUM of the numbers : ";
    cin>>S;
    cout<<"Enter the PRODUCT of the numbers : ";
    cin>>P;
    cout<<"\nThe required quadratic equation is x*x-"<<S<<"x+"<<P<<endl;
    c = sqrt(S*S - 4*P);
    a = (S+c)/2;
    b = (S-c)/2;
    cout<<"\nFirst number is : "<<a<<"\nSecond number is : "<<b<<"\n"<<"a+b : "<<a+b<<"\n";
    return 0;
}