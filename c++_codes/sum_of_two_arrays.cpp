#include<iostream>
using namespace std;
class array_sum{
    int a[5], i;
    public :
        array_sum(){
            for(i=0; i<5; i++)
                a[i]=0;
        }
        void get_data(){
            for(i=0; i<5; i++)
                cin>>a[i];
        }
        void display(){
            for(i=0; i<5; i++)
                cout<<a[i]<<"\t";
        }
        array_sum operator +(array_sum p){
            array_sum temp;
            for(i=0; i<5; i++)
                temp.a[i]=a[i]+p.a[i];
            return temp;
        }
};
int main(){
    array_sum x, y, z;
    x.get_data();
    y.get_data();
    z=x+y;
    cout<<"\n";
    x.display();
    cout<<"\n";
    y.display();
    cout<<"\n";
    z.display();
    cout<<"\n";
    return 0;
}