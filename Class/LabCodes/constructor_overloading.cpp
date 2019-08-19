#include<iostream>
using namespace std;
class marks{
    char name[10];
    int Maths_marks, Science_marks, Physics_marks, Chemistry_marks, English_marks;
    double Percentage_marks;
    int Total;
    public :
        marks(){
            Total = 0;
            Maths_marks = 0;
            Science_marks = 0;
            Physics_marks = 0;
            Chemistry_marks = 0;
            English_marks = 0;
            Percentage_marks = 0;
        }
        marks(int a, int b, int c, int d, int e){
            a = Maths_marks;
            b = Science_marks;
            c = Physics_marks;
            d = Chemistry_marks;
            e = English_marks;
            Total = a+b+c+d+e;
            Percentage_marks = (double)Total/5;
        }
        void get(){
            cout<<"Enter the name of the student : ";
            cin>>name;
            cout<<"Enter the marks of maths, science, physics, chemistry and english respectively : ";
            cin>>Maths_marks>>Science_marks>>Physics_marks>>Chemistry_marks>>English_marks;
        }
        void display(){
            Total = Maths_marks+Science_marks+Physics_marks+Chemistry_marks+English_marks;
            Percentage_marks=(double)Total/5;
            cout<<"\n\n"<<name<<"\nTotal marks is "<<Total<<"\n"<<"Percentage is "<<Percentage_marks<<"%%";
        }
};
int main(){
    marks a;
    a.get();
    a.display();
    marks a2(95, 80, 74, 77, 88);
    a2.get();
    a2.display();
    cout<<"\n";
    return 0;
}