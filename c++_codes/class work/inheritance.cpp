/*
 *  C++ program to show Inheritance;
*/
#include<iostream>
#include<cmath>
using namespace std;
float p = 3.14; 
/*
 *  Declaration of the parent class shape;
 *  number_of_sides :- Total of sides of the polygon
 *  number_of_equal_sides :- Total number of equal sides in the polygon
 *  area :- Area of the polygon
 *  perimeter :- Perimeter of the polygon
*/
class shape{
    protected :
        int number_of_sides;
        int number_of_equal_sides;
        float area;
        float perimeter;
    public :
        void display(){
            cout<<"It has "<<number_of_sides<<" number of sides among which "<<number_of_equal_sides<<" sides are of equal length.";
            cout<<"\nArea is : "<<area;
            cout<<"\nPerimeter is : "<<perimeter;
        }
};
class circle : public shape{    // Derived class circle
    float radius;
    public : 
        void get_info(){
            cout<<"*** CIRCLE ***\n";
            cout<<"Enter the number of sides : ";
            cin>>number_of_sides;
            cout<<"Enter the length of the radius : ";
            cin>>radius;
        }
        void calculation(){
            perimeter = 2*p*radius;
            area = p*radius*radius;
            cout<<"*** CIRCLE ***\n";
            display();
        }
};
class square : public shape{    // Derived class square
    float a;
    public :
        void get_info(){
            cout<<"*** SQUARE ***\n";
            cout<<"Enter the number of sides : ";
            cin>>number_of_sides;
            cout<<"Enter the number of equal sides : ";
            cin>>number_of_equal_sides;
            cout<<"Enter the length of the side : ";
            cin>>a;
        }
        void calculation(){
            perimeter = number_of_sides*a;
            area = a*a;
            cout<<"*** SQUARE ***\n";
            display();
        }
};
class rectange : public shape{    // Derived class rectangle
    float length, breadth;
    public : 
        void get_info(){
            cout<<"*** RECTANGLE ***\n";
            cout<<"Enter the number of sides : ";
            cin>>number_of_sides;
            cout<<"Enter the number of equal sides : ";
            cin>>number_of_equal_sides;
            cout<<"Enter the length and breadth respectively : ";
            cin>>length>>breadth;
        }
        void calculation(){
            perimeter = (number_of_sides*length)+(number_of_equal_sides*breadth);
            area = length*breadth;
            cout<<"*** RECTANGLE ***\n";
            display();
        }
};
int main(){
    circle c;
    square s;
    rectange r;
    c.get_info();
    cout<<"\n";
    s.get_info();
    cout<<"\n";
    r.get_info();
    cout<<"\n";
    c.calculation();
    cout<<"\n";
    s.calculation();
    cout<<"\n";
    r.calculation();
    cout<<"\n";
}