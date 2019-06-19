#include<iostream>
using namespace std;

int main(){
    int A, B, rslt;
    cin>>A>>B;
    rslt=A-B;
    if(rslt%10 == 1 || rslt%10 ==0){
        rslt=rslt+1;
    }
    else{
        rslt=rslt-1;
    }
    cout<<rslt;
    return 0;
}