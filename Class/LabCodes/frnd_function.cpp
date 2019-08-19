#include<iostream>
using namespace std;
class maths;
class english;
class science{
    int marks;
    public :
        void get_mark(){
            cout<<"Input the marks of science : ";
            cin>>marks;
        }
    friend void percentage(maths, english, science); 
};
class english{
    int marks;
    public :
        void get_mark(){
            cout<<"Input the marks of science : ";
            cin>>marks;
        }
    friend void percentage(maths, english, science);
};
class maths{
    int marks;
    public :
        void get_mark(){
            cout<<"Input the marks of maths : ";
            cin>>marks;
        }
    friend void percentage(maths, english, science);
};
void percentage(maths a, english b, science c){
    float sum, percentage;
    sum = a.marks+b.marks+c.marks;
    percentage = sum/3;
    cout<<"Percentage : "<<percentage<<"%%";
}
int main(){
    maths a;
    english b;
    science c;
    a.get_mark();
    b.get_mark();
    c.get_mark();
    percentage(a, b, c);
    cout<<"\n";
}

