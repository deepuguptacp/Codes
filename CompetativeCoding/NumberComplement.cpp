//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/
#include<bits/stdc++.h>
using namespace std;
/*
1. First we will find the number of bits in the given integer
2. Then we will find the maximum number having same number of bits.(call it x )
3. Then we will XOR the given integer with x
*/
int Complement(int num){
    if(num == 0)
      return 1;
    int numofBits = log2(num) + 1;
    int maxWithBit = pow(2, numofBits) - 1;
    return num ^ maxWithBit;
}

int main(){
    cout<<"Enter the number of testcases : ";
    int t;
    cin>>t;
    cout<<endl;
    while(t--){
        cout<<"Enter the number whose complement to be found : ";
        int n;
        cin>>n;
        cout<<"Complement of "<<n<<" is : "<<Complement(n)<<endl;
    }
    return 0;
}