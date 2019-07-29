// Hash Mapping problem
#include<iostream>
#include<cmath>

using namespace std;

void SecondOrderComplexity(int [], int , int );
void LinearComplexity(int [], int , int );

int main(){
    int i, key, n, choice;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of the array : ";
    for(i=0; i<n; i++){
        cin>>array[i];
    } 
    cout<<"Enter the at most difference between the number's index : ";
    cin>>key;
    while(1){
        cout<<"--------------------------------"<<endl;
        cout<<"Maximum Product Of Three Numbers"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"1.For time Complexity O(n^2) "<<endl;
        cout<<"2.For time Complexity O(n) "<<endl;
        cout<<"3.EXIT"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){                 // Switch case To provide user better time complexity
            case 1:
                SecondOrderComplexity(array, n, key);
                break;
            case 2:
                LinearComplexity(array, n, key);
                break;
            case 3:
                cout<<"Thank You"<<endl;
                exit(1);
            default :
                cout<<"Wrong choice"<<endl;
        }
    }
    cout<<"\n";
    return 0;
}

void  SecondOrderComplexity(int array[], int n, int key){
    cout<<"With time complexity O(n^2) "<<endl;
    int i, j;
    for(i=0; i<n; i++){
        for(j=i+1; j<=n; j++){
            if(array[i] == array[j] && abs(i-j) <= key){
                cout<<"The position of requiered elements is "<<i<<" and "<<j<<endl;
            }
        }
    }
    cout<<"\n";
}

void LinearComplexity(int array[], int n, int k){
    int i, j, hash[n];
    for(i=0; i<n; i++){
        
    }
}