#include<iostream>
using namespace std;
class students{
    int marks;
    char name[50];
    int roll_number;
    char branch[25];
    public :
        void get_details(){
            cout<<"Enter the total marks obtained by the student: ";
            cin>>marks;
            cout<<"Enter NAME : ";
            cin>>name;
            cout<<"Enter roll number : ";
            cin>>roll_number;
            cout<<"Branch : ";
            cin>>branch;
        }
        void percentage(){
            float percent;
            percent = (float)marks/5;
            cout<<"Percentage mark is : "<<percent<<"\n";
        }
};
int average_marks(students *, int);
int main(){
    int n, i;
    float average;
    cout<<"Enter the number the students whose information is to be collected : ";
    cin>>n;
    students S[n];
    for(i=0;i<n; i++){
        S[i].get_details();
        S[i].percentage();
    }
    average = average_marks(S, n); 
    cout<<"Average mark of the class is : "<<average;
    cout<<"\n";
}
int average_marks(students *S, int size){
    float avg, i;
    int total=0;
    for(i=0; i<size; i++){
        total = total +S[i].marks;
    }
    avg = (float)total/size;
    return avg;
}