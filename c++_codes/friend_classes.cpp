#include<iostream>
using namespace std;
class A{
    friend class B;
    public :
        int a;
        void get(){
            cin>>a;
        }
};
class B{
    friend class C;
    int b;
    public :
        void get(){
            cin>>b;
    }
};
class C{
    public :
        void display(A i, B j){
            cout<<i.a<<j.b;
        }
};
int main(){
    A x;
    x.get();
    B y;
    y.get();
    C z;
    z.display(x, y);
}