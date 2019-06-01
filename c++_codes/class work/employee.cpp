/*
 * C++ program for class employees.
*/
#include<iostream>
using namespace std;
/*
 * Declaration of the class employee.
*/
class employee{
    int e_number;
    char e_name[20];
    float Basic, HRA, DA, Net_Pay;
    void calculate();
    public : 
        void have_data();
        void display();
};
void employee :: calculate(){               // Calculation of salary
    HRA = (Basic*HRA)/100;
    DA = (Basic*DA)/100;
    Net_Pay = Basic - HRA-DA;
    cout<<"Salary to be paid to the employee : "<<Net_Pay;
}
void employee :: have_data(){                // Get information.
    cout<<"Enter the ID number of the employee : ";
    cin>>e_number;
    cout<<"Enter the name of the employee : ";
    cin>>e_name;
    cout<<"Enter the basic salary of the employee : ";
    cin>>Basic;
    cout<<"Enter the HRA & DA of the employee : ";
    cin>>HRA>>DA;
}
void employee :: display(){                 // Print thr data.
    cout<<"\nName of the Employee : "<<e_name<<"\nNumber of the Employee : "<<e_number;
    cout<<"\nBasiic salary of the employee : "<<Basic<<"\nHRA & DA of the employee : "<<HRA<<"%%\t"<<DA<<"%%"<<endl;
    calculate();
}
/*
 * contains menu.
*/
int main(){
    employee E;
    E.have_data();
    E.display();
    cout<<"\n";
    return 0;
}