#include<iostream>
using namespace std;
class students{
    public :
    int roll;
    char name[20];
    public :
        void get_detail();
        void display();
};
void students :: get_detail(){
    cout<<"Enter the roll number of the student : ";
    cin>>roll;
    cout<<"Enter the name of the student : ";
    cin>>name;
}
void students :: display(){
    cout<<"Roll Number : "<<roll<<"\n"<<"Name : "<<name<<endl;
}
int main(){
    int roll, n, i;
    char name[20];
    cout<<"Enter the number of students whose record is to be kept : ";
    cin>>n;
    students A[n];
    for(i=0; i<n; i++){
        A[i].get_detail();
        cout<<"\n";
    }
    for(i=0; i<n; i++){
        cout<<"Details of student "<<i+1<<" is\n";
        A[i].display();
        cout<<"\n";
    }
    return 0;
}