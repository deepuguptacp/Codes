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

int main(){
    int n, target;
    cout<<"Enter the number elements in the array : ";
    cin>>n;
    cout<<"Enter the target number : ";
    cin>>target;
    int a[n];
    cout<<"Enter the elements of the array : ";
    for(i=0; i<n; i++)
        cin>>a[i];
    while(1){
        cout<<"--------------------------------"<<endl;
        cout<<"Acieveing the target"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"1.For time Complexity O(n^2) "<<endl;
        cout<<"2.For time Complexity O(nlog(n)) "<<endl;
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
}