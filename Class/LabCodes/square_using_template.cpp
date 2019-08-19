#include<iostream>
using namespace std;
template<class T>           // Declaration of template.
class square{               // Declaration of the class
    T num, sq;
    public :
        square(T b){        // Default constructor.
            num=b;
            sq=0;
        }
        void find_square(){ // Function to find the square.
            sq = num*num;
        }
        void display(){     // Function to display the output.
            cout<<"\n ****SQUARE**** \n";
            cout<<"Square of "<<num<<" is : "<<sq;
            cout<<"\n";
        }
};
int main(){
    int A;
    cin>>A;
    square<int> p(A);       // Object(1) of integer type.
    p.find_square();
    float B;
    cin>>B;
    square<float> q(B);     // Object(2) of float type.
    q.find_square();
    p.display();
    q.display();
}