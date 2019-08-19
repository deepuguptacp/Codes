#include<iostream>
using namespace std;
int main(){
    float n,i, sum=0;
    cout<<"Enter the number of terms of the sum : ";
    cin>>n;
    for(i=1; i<=n; i++){
        sum=sum+(1/(i));
    }
    cout<<"SUM : "<<sum<<endl;
}