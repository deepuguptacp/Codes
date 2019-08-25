/*
    Q:- There are 1000 switches and 1000 persons. ith person flips the switch that is a multiple of i.
        what is th e status of nth switch after the event occured.
*/
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
int square(int n){
    double x=sqrt(n);
    if(x-floor(x) == 0)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    cin>>n;
    cout<<square(n)<<endl;
    return 0;
}