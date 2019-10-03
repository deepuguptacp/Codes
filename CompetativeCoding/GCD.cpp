#include<iostream>
using namespace std;

int gcd(int A, int B) {
    int i, GCD=0;
    if(B==0)
        return A;
    else 
        return gcd(B, A%B);
}
int main() {
    int a, b;
    cout<<"Enter the  numbers : ";
    cin>>a>>b;
    cout<<"GCD : "<<gcd(a, b)<<endl;
    return 0;
}