#include<iostream>
using namespace std;
class numbers{
    int num1, num2;
    private : 
        void display(int a, int b){
            if(a>b)
                cout<<"num1 is larger";
            else
                cout<<"num2 is larger";
        }
    public :
        void get_value(){
            cout<<"Enter any two numbers to compare : ";
            cin>>num1>>num2;
            display(num1, num2);
        }
};
int main(){
    numbers A;
    A.get_value();
}