#include<iostream>
using namespace std;
class numbers{
    int a[10];
    static int get;
    static int get1;
    public :
        void input();
        void count();
};
int numbers :: get=0;
int numbers :: get1=0;
void numbers :: input(){
    int i;
    for(i=0; i<10; i++)
        cin>>a[i];
}
void numbers :: count(){
    int i;
    for(i=0; i<10; i++){
        if(a[i]<0)
            get++;
        else if(a[i]>0)
            get1++;
    }
    cout<<"Positive numbers : "<<get1<<endl;
    cout<<"Negative numbers : "<<get<<endl;
    cout<<"Number of zeroes : "<<10-(get+get1)<<endl;
}
int main(){
    numbers A;
    A.input();
    A.count();
}
