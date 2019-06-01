#include<iostream>
#include<time.h>
using namespace std;
int Ifactorial(int n, int fact);    // Declaration of Itterative Factorial
int Rfactorial(int n);  // Declaration of Recursive Factorial
int main(){
    int num, fact=1, Itterative_Factorial, recursive_Factorial;
    cout<<"Enter a number to find its factorial : ";
    cin>>num;
    clock_t b, end;
    b = clock();
    cout<<"******RECURSIVE FACTORIAL*****\n";
    if(num < 0){
        cout<<"Factorial doesn't exist.\n";
        return 0;
    }
    else{
        recursive_Factorial = Rfactorial(num);
        cout<<num<<"! = "<<recursive_Factorial<<"\n";
    }
    end = clock();
    cout << "Time required for Recursive factorial execution: "<< (double)(end-b)/CLOCKS_PER_SEC<< " seconds." << "\n\n";
    clock_t begining, e;
    begining = clock();
    cout<<"\n*****ITTERATIVE FACTORIAL*****\n";
    if(num < 0){
        cout<<"Factorial doesn't exist.\n";
        return 0;
    }
    else{
        Itterative_Factorial = Ifactorial(num, fact);
        cout<<num<<"! = "<<Itterative_Factorial<<"\n";
    }
    e = clock();
    cout << "Time required for itterative factorial execution: "<< (double)(e-begining)/CLOCKS_PER_SEC<< " seconds." << "\n\n";
}
/*
 * function for itterative factorial.
 * 
 * n: input number
 * fact: factorial value  
 */
int Ifactorial(int n, int fact){
    int result;
    if(n <= 1)
        return fact; // as 0!=1!=1;
    else{
        fact = fact * n;
        return Ifactorial(n-1, fact); // Itterration.
    }  
}
/*
    Function for recursive factorial.
*/
int Rfactorial(int n){
    if(n <= 1)
        return 1;
    else
        return n * Rfactorial(n-1);
}