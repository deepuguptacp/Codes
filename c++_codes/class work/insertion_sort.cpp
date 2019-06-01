#include<iostream>
using namespace std;
int main(){
    int n, i, temp, j;
    cout<<"Enter the number of elements of array : ";
    cin>>n;
    int a[n],pos; 
    cout<<"Enter the elements : ";
    for(i=0; i<n; i++)
        cin>>a[i];
    //insertion sort logic
    for(i=1; i<n; i++){
        temp=a[i];
        j=i-1;
        while((temp<a[i]) && (j>=0)){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    cout<<"\n";
    for(i=0; i<n; i++)
        cout<<"\t"<<a[i];
    cout<<"\n";
    return 0;
}