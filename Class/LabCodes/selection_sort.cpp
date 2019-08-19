#include<iostream>
using namespace std;
int main(){
    int n, i, j, k, temp;
    cout<<"Enter the number of the elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        for(j=i; j<n; j++){
            if(a[i]>=a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        for(k=0; k<n; k++){
            cout<<a[k]<<"\t";
        }
        cout<<"\nNext Step\n";
    }
    cout<<"THE END\n";
}