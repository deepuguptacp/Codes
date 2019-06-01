#include<iostream>
using namespace std;
class A{
    int a[4], i;
    public :
        A(){
            for(i=0; i<4; i++)
                a[i]=0;
        }
        A(int *x){
            for(i=0; i<4; i++)
                a[i]=x[i];
        }
        friend istream & operator >>(istream &, A &);
        friend ostream & operator <<(ostream &, A &);
};
istream & operator >>(istream &din, A &p){
    for(int i=0; i<4; i++)
        din>>p.a[i];
    return din;
}
ostream & operator <<(operator &dout, A &p){
    dout<<"( "<<p.a[0];
    for(int i=1; i<4;i++){
        dout<<", "<<p.a[i];
    }
    dout<<")";
    return dout;
}
int x[4]={2, 4, 3};
int main(){
    A b;
    A d=x;
    cout<<"Elements of b : ";
    cin>>b;
    cout<<b<<"\n";
    cout<<"d"<<"\n";
    return 0;
}