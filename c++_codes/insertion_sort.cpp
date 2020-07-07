#include<iostream>
using namespace std;
int main(){
    int n, temp;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int a[n],b[n], i, j;
    cout<<"Elements of the array : ";
    for(i=0; i<n; i++)
        cin>>a[i];
    b[0]=a[0];
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            if(a[i]<=b[j]){
                temp=a[i];
                a[i]=b[j];
                b[j]=temp;
            }
        }
    }
    cout<<"\n";
    for(i=0; i<n; i++)
        cout<<b[i]<<"\t";
}