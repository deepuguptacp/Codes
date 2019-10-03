//https://www.codechef.com/COOK110B/problems/TWOGRS
#include<iostream>
using namespace std;
#define ll long long
int main(){
    int T;
    cin>>T;
    while(T--){
        ll A, B, C;
        cin>>A>>B>>C;
        int temp = 0;
        ll sum = A + 2*B + 3*C;
        if(sum % 2 == 0){
            if(B%2!=0 && C==0 && A==0)
                temp = 0;
            else if(A==1 && B==0 && C>=1)
                temp = 0;
            else if(A==0 && B==1 && C>=1)
                temp = 0;
            else
                temp = 1;
        } 
        if(temp == 0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}