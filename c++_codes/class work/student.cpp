/*
 * C++ program for class students.
*/
#include<iostream>
using namespace std;
/*
 * Declaration of the class student.
*/
class student{
    char s_name[20];
    int roll_number;
    char department[10];
    float height;
    float weight;
    public :
        student(){
            s_name[20]={};
            roll_number=0;
            department[10]={};
            height=0;
            weight=0;
        }
        void get_info(){                                      // Get information.
            cout<<"\nEnter the name of the student : ";
            cin>>s_name;
            cout<<"Enter the roll_number of the student : ";
            cin>>roll_number;
            cout<<"Enter the department of the student : ";
            cin>>department;
            cout<<"Enter the height of the student : ";
            cin>>height;
            cout<<"Enter the weight of the student : ";
            cin>>weight;
        }
        void print(){                                       // Print thr data.
            cout<<"\nInformation of ***"<<s_name<<"***";
            cout<<"\nRoll number :- "<<roll_number<<"\nDepartment :- "<<department<<
            "\nHeight :- "<<height<<"\nWeight :- "<<weight;
        }
};
/*
 * contains menu.
*/
int main(){
    int n, i;
    cout<<"Enter the number of students whose information is to be collected : ";
    cin>>n;
    student a[n];
    for(i=0; i<n; i++){
        cout<<"\n";
        cout<<"Information of student "<<i+1;
        a[i].get_info();
    }
    for(i=0; i<n; i++)
        a[i].print();
    cout<<"\n\n";
    return 0;
}