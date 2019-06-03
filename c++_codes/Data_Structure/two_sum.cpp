/*Two Sum problem
 There is atarget integer which is achieved when adding up some specific number of integers from the array
 Example:-
    Array : {1, 2, 5, 3}
    Target = 5
    num[1] + num[3] = target
    also num[2] = Target {But not considered to be the solution as it is achieved not by adding two integers}
    Output = {2, 3}
*/
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
void MoreComplex(int [], int, int);

void sort(int [], int , int);
void LessComplex(int [], int, int);
int main(){
    int n, target, i, choice;
    cout<<"Enter the number elements in the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : ";
    for(i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter the target number : ";
    cin>>target;
    while(1){
        cout<<"--------------------------------"<<endl;
        cout<<"Achieveing the target"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"1.For time Complexity O(n^2) "<<endl;
        cout<<"2.For time Complexity O(nlog(n)) "<<endl;
        cout<<"3.EXIT"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){                 // Switch case To provide user better time complexity
            case 1:
                MoreComplex(a, n, target);
                break;
            case 2:
                LessComplex(a, n, target);
                break;
            case 3:
                cout<<"Thank You"<<endl;
                exit(1);
            default :
                cout<<"Wrong choice"<<endl;
                exit(1);
        }
    }
    return 0;
}
void MoreComplex(int a[], int n, int target){
    int i, j;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            int temp = a[i] + a[j];
            if(temp == target){
                cout<<"Target Achieved : {"<<a[i]<<", "<<a[j]<<"}"<<endl;
            }
        }
    }
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
void LessComplex(int a[], int n, int target){
    cout<<"Time Complexity O(nlog(n))"<<endl;
    sort(a, 0, n-1);
    cout<<"Sorted array : "<<endl;
    for(int k=0; k<n; k++)
        cout<<a[k]<<"  ";
    cout<<"\n";
    int i=0, j=n-1, temp;
    while(i>j){
        temp = a[i] + a[j];
        if(temp == target){
            cout<<"Target Achieved : {"<<a[i]<<", "<<a[j]<<"}"<<endl;
            break;
        }
        else if(temp>target){
            --j;
        }
        else{    
            ++i;
        }
    }
}