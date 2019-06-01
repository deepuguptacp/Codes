#include<iostream>
using namespace std;
int main(){
    int n, i, j, sum1=0, sum2=0;
    cout<<"Enter the length of array : ";
    cin>>n;
    int a[n][n];
    cout<<"Enter the elements of the array : \n";
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            cin>>a[i][j];
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i+j == (n-1))
                sum2=sum2+a[i][j];
            if(i == j)
                sum1=sum1+a[i][j];
        }   
    }
    cout<<sum1<<"\t"<<sum2<<"\n";
    cout<<abs(sum1-sum2)<<"\n";
    return 0;
}