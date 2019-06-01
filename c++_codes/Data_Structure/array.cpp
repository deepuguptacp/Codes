#include<iostream>
using namespace std;
void push(int *, int);
void Delete(int *, int);
void sort(int *, int);
int search(int *, int);
void print(int *, int);
int main(){
    int a[50], i, n, operation, j;
    char p;
    cout<<"Enter the number of elemnts of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(i=0; i<n; i++)
        cin>>a[i];
    cout<<"Press 1 to insert an element in the array. "<<endl;
    cout<<"Press 2 to Delete any element of the array. "<<endl;
    cout<<"Press 3 to sort the elements of the array. "<<endl;
    cout<<"Press 4 to search any element from the array. "<<endl;
    cin>>operation;
    switch(operation){
        case 1:
        push(a, n);
        break;
        case 2:
        Delete(a, n);
        break;
        case 3:
        sort(a, n);
        break;
        case 4:
        j=search(a, n);
        cout<<"The element is present at "<<j+1<<" position";
        break;
    }
    cout<<"\n";
}
void push(int *b, int size){
    int n, i;
    cout<<"Enter the position to insert a new element : ";
    cin>>n;
    for(i=size; i>=n; i--)
        b[i+1]=b[i];
    cout<<"Eneter the new element : ";
    cin>>b[n];
    size=size+1;
    print(b, size);
}
void Delete(int *b, int size){
    int n, i, temp, k;
    cout<<"Enter the element to be Deleted : ";
    cin>>n;
    k=search(b, size);
    temp=b[k];
    for(i=k; i<size; i++)
        b[i]=b[i+1];
    size = size-1;
    print(b, size);
}
void sort(int *b, int size){
    int i, j, temp;
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(b[i]>=b[j]){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    print(b, size);
}
int search(int *b, int size){
    int i, n, pos;
    cout<<"Enter the element to search : ";
    cin>>n;
    for(i=0; i<size; i++){
        if(b[i]==n)
            pos=i;
    }
    return pos;
}
void print(int *b, int size){
    int i;
    for(i=0; i<size; i++)
        cout<<b[i]<<"\t";
}