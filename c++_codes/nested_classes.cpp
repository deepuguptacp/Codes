#include<iostream>
using namespace std;
class A{
    int roll_number;
    char name[50];
    public : 
        void input(){
            cin>>roll_number>>name;
        }
         void display(){
                cout<<"\n"<<roll_number<<"\n"<<name;
        }
    class B{
        int marks;
        public :
            void input(){
                cin>>"\n"<<marks;
            }
            void display(){
                cout<<marks;
            }
    };
};
int main(){
    A a;
    A::B b;
    a.input;
    b.input;
    b.display;
    a.display;
    cout<<"\n";
}