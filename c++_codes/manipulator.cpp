#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int roll, t_marks;
	char name[20];
	cout<<"Enter your Roll Number : ";
	cin>>roll;
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter your total marks : ";
	cin>>t_marks; 
	cout<<"Roll number"<<setw(10)<<"Name"<<setw(17)<<"Total Marks\n";
	cout<<roll<<setw(15)<<name<<setw(12)<<t_marks<<"\n";
}
