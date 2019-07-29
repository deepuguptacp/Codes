//Find the Nth Largest element in an unsorted array
#include<iostream>
using namespace std;
int SecondLargestElement(int [], int );
int main(){
    int i, n, SecondLargestelement;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of the of the array : ";
    for(i=0; i<n; i++){
        cin>>array[i];
    }
    SecondLargestelement=SecondLargestElement(array, n);
    cout<<"Second largest element is : "<<SecondLargestelement<<endl;
    return 0;
}
int SecondLargestElement(int array[], int n){
    int i, first=0, second=0;
    for(i=0; i<n; i++){
        if(array[i]>first){
            second=first;
            first=array[i];
        }
    }
    return second;
}