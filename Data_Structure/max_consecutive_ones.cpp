/*Only Binary input allowed Either 0's OR 1's*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void MoreComplex(int [], int );
void LessComplex(int [], int );
int main(){
    int n, choice;
    cout<<"Enter the length of the binary code : ";
    cin>>n;
    int a[n], i;
    cout<<"Enter the binary code : ";
    for(i=0; i<n; i++)
        cin>>a[i];
    while(1){
        cout<<"-----------------------------------"<<endl;
        cout<<"Counting the maximum number of ONES"<<endl;
        cout<<"-----------------------------------"<<endl;
        cout<<"1.For time Complexity O(n^2) "<<endl;
        cout<<"2.For time Complexity O(n) "<<endl;
        cout<<"3.EXIT"<<endl;
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
                cout<<"Thank You"<<endl;
                exit(1);
            default :
                cout<<"Wrong choice"<<endl;
                exit(1);
        }
    }
    return 0;
}
void MoreComplex(int a[], int n){
    cout<<"Time Complexity O(n^2)"<<endl;
    int i, max_length=0;
    for(i=0; i<n; i++){
        int temp=0;
        while(a[i]==1){
            temp++;
            i++;
        }
        max_length=max(max_length, temp);
    }
    cout<<"Maximum Length = "<<max_length<<endl;
}
void LessComplex(int a[], int n){
    cout<<"Time Complexity O(n)"<<endl;
    int i, max_length=0;
    while(i<n){
        if(a[i]==1){
            int temp=1;
            int r =i + 1;
            while(r<n && a[r]==1){
                ++r;
                ++temp;
            }
            i=r;
            max_length=max(max_length, temp);
        }
        else{
            ++i;
        }
    }
    cout<<"Maximum Length = "<<max_length<<endl;
}