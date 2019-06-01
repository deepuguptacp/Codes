#include<iostream>
#include<iomanip>
using namespace std;
class Student{
    int roll_number;
    char name[20];
    int marks;
    void display();
    public :
        void details();
};
void Student :: display(void){
    cout<<"Name : "<<name<<"\nRoll number : "<<roll_number<<"\nMarks : "<<marks<<endl; 
}
void Student :: details(void){
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter your Roll number : ";
    cin>>roll_number;    
    cout<<"Enter your marks : ";
    cin>>marks;
    display();
}
int main(){
    Student a;
    a.details();
}