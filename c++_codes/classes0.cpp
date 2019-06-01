#include<iostream>
using namespace std;
class person{
    char name[20];
    int age;
    public :
        void getdata();
        void display();
};
void person :: getdata(void){
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age;
}
void person :: display(void){
    cout<<"\n NAME : "<<name;
    cout<<"\n AGE : "<<age<<"\n";
}
int main(){
    person p, q;
    p.getdata();
    p.display();
    q.getdata();
    q.display();
    return 0;
}