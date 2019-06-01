#include<iostream>
using namespace std;
void insertion_sort(int *, int);
void selection_sort(int *, int);
int main(){
    int n, operation, i;
    //char ch='n';
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : ";
    for(i=0; i<n; i++)
        cin>>a[i];
    cout<<"Press 1 for selection sort \nPress 2 for insertion sort\nYour choice : ";
    cin>>operation;
    switch(operation){
        case 1 :
        cout<<"*****SORTING VIA SELECTION SORT*****";
        selection_sort(a, n);
        break;
        case 2 :
        cout<<"*****SORTING VIA INSERTION SORT*****";
        insertion_sort(a, n);
        break;
        default :
        cout<<"Enter any valid choice"<<endl;
    }
    cout<<"\n";
    return 0;
}
void selection_sort(int *b, int size){
    int i, j, min, temp, m;
    for(i=0; i<size; i++){
        min=b[i];
        for(j=i+1; j<size; j++){
            if(min>b[j]){
                min=b[j];
                m=j;
            }
        }
        temp=b[m];
        b[m]=b[i];
        b[i]=temp;
    }
    for(i=0; i<size; i++)
        cout<<b[i]<<"\t";
}
void insertion_sort(int *b, int size){
    int i, j, c[size];
    c[0]=b[0];
    for(i=0; i<size; i++){
        c[i]=b[i];
        for(j=i-1; j>=0; j--){
            if(b[i]<c[j]){
                c[j+1]=c[j];
                c[j]=b[i];
            }
        }
    }
    for(i=0; i<size; i++)
       cout<<c[i]<<"\t";
}
