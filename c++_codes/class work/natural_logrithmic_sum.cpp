/*
 * C++ Program to find natural logrithmic sum
*/
#include<iostream>
#include<math.h>
using namespace std;
float sum(int n){
    int i;
    float add=0;
    for(i=1; i<=n; i++)
        add = add + 1/i; 
    return add;  
}
int factorial(int n){
    if(n <= 1)
        return 1;
    else
        return n * factorial(n-1);
}
float logrithmic_sum(int n){
    int i;
    float sum=0;
    for(i=1; i<20; i++){
        sum=sum-pow(-1, i)*pow(n, i)/factorial(i);
    }
    return sum;
}
/*
 * Main: Conatins Menu
*/
int main(){
    int index, number, a;
    double result, numerator, denominator;
    cout<<"\nEnter the index of the logrithmic function : ";
    cin>>index;
    cout<<"\nEnter the number of terms in function : ";
    cin>>number;
    a = sum(number);
    /*
        As we know that log(base)e x == x-x^2/2!+x^3/3!-x^4/4!............And so on.
    */
    numerator = logrithmic_sum(a);
    denominator = logrithmic_sum(index);
    result = numerator/denominator;
    cout<<"\nLOGRITHMIC SUM IS : "<<result;
    cout<<"\n\n";
    return 0;
}