#include<iostream>
using namespace std;
template<class T>           // Declaration of the template class.
class num{                  // Declaration of the class.
    int n;
    public :
        num(T t){           // Default constructor.
            cout<<t;
        }
};
int main(){
    num<int> a(2);          // Object(1) of integer type.
    cout<<"\n";
    num<float> b(2.3);      // Object(2) of float type.
    cout<<"\n";
    num<char> c('d');       // Object(3) of character type.
    cout<<"\n";
    return 0;
}