//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/
//algorithm/add-alternate-elements-of-2-dimensional-array/
#include<iostream>
using namespace std;
#define n 3
int A[3][3];
int main(){
    int i=0, j=0;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            cin>>A[i][j];
    int sum1=0, sum2=0, temp=0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(temp%2 == 0)
                sum1+=A[i][j];
            else
                sum2+=A[i][j];
            temp++;
        }
        //cout<<sum1<<endl<<sum2<<endl<<endl;
    }
    cout<<sum1<<endl<<sum2<<endl;
    return 0;
}