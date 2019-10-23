/*Find the maximum product of three numbers of an array*/
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void MoreComplex(int [], int );         // Function for time complexity O(n^3)
void sort(int [], int , int);           // Function to sort the elements of the array
void LessComplex(int [], int );         // Function for time Complexity O(nlogn)
void easiest(int [], int );
int main(){
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int a[n], i, choice;
    cout<<"Elements of the array : ";
    for(i=0; i<n; i++)
        cin>>a[i];
    while(1){
        cout<<"--------------------------------"<<endl;
        cout<<"Maximum Product Of Three Numbers"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"1.For time Complexity O(n^3) "<<endl;
        cout<<"2.For time Complexity O(nlog(n)) "<<endl;
        cout<<"3. The easiest way "<<endl;
        cout<<"4.EXIT"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){                 // Switch case To provide user better time complexity
            case 1:
                MoreComplex(a, n);
                break;
            case 2:
                LessComplex(a, n);
                break;
            case 3:
                easiest(a, n);
                break;
            case 4:
                cout<<"Thank You"<<endl;
                exit(1);
            default :
                cout<<"Wrong choice"<<endl;
                exit(1);
        }
    }
    cout<<"\n";
    return 0;
}
void MoreComplex(int a[], int n){
    cout<<"With time complexity O(n^3) "<<endl;
    int i, j, k, temp;
    int maximum=0;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            for(k=j+1; k<n; k++){
                temp=a[i] * a[j] * a[k];
                if(temp>maximum)
                    maximum=temp;
            }
        }
    }
    cout<<"Max Product is "<<maximum<<endl;
}
void sort(int a[], int low, int high){
    int pivot, i, j, temp;
    if (low < high) {
        pivot = low;
        i = low;
        j = high;
    while (i < j) {
        while (a[i] <= a[pivot] && i <= high) {
            i++;
        }
        while (a[j] > a[pivot] && j >= low) {
            j--;
        }
        if (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[j];
    a[j] = a[pivot];
    a[pivot] = temp;
    sort(a, low, j - 1);        // Recursive call of the function.
    sort(a, j + 1, high);       // Recursive call of the function.
    }
}
void LessComplex(int a[], int n){
    cout<<"time Complexity O(nlog(n))"<<endl;
    sort(a, 0, n-1);
    cout<<"Sorted array : "<<endl;
    for(int i=0; i<n; i++)
        cout<<a[i]<<"  ";
    cout<<"\n";
    int product1, product2;
    product1 = a[0] * a[1] * a[n-1];
    product2 = a[n-3] * a[n-2] * a[n-1];
    cout<<"maximum = "<<max(product1, product2)<<endl;
}

void easiest(int A[], int n){
    sort(A, A+n);
    cout<<A[n-1] * A[n-2] * A[n-3]<<endl;
}
