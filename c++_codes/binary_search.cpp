#include<iostream>
using namespace std;
int main(){
    int n, l, u;
    cout<<"Number of elements of the array : ";
    cin>>n;
    int a[n], i, key,flag=0, mid;
    cout<<"Enter the elements : ";
    for(i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter the element to be searched : ";
    cin>>key;
    l=1;
    u=n;
    while(l<u && flag==0){
        mid=((l+u)/2);
        if(key==a[mid]){
            cout<<"Your number is at "<<mid+1<<" position";
            flag=1; 
        }
        else if(key<a[mid])
            u=mid-1;
        else
            l=mid+1;
    }
    if(flag==0)
        cout<<"Your element is not present";
    cout<<"\n";
    return 0;
}