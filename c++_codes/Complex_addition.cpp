#include<iostream>
using namespace std;
class complex{
    float real, comp;
    public :
    void get_data(){
        cout<<"Enter the real and complex part of the number : ";
        cin>>real>>comp;
    }
    void display(){
        cout<<real<<"+j"<<comp<<"\n";
    }
    complex operator+ (complex a){
        complex temp;
        temp.real=real+a.real;
        temp.comp=comp+a.comp;
        return temp;
    }
};
int main(){
    complex C1, C2, C3;
    C1.get_data();
    C2.get_data();
    C3=C1+C2;
    cout<<"C1 = "; C1.display();
    cout<<"C2 = "; C2.display();
    cout<<"C3 = "; C3.display();
    return 0;
}