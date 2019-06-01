/*
    Program to maintain elementry database of employee.
*/
#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
/*
    Main function
*/
int main(){
    string first_name, salary, age, post, post_description;
    int salary1, age1, count;
    ifstream input;
    ofstream output;
    input.open("employee.txt");         //Input
    output.open("2.txt");               //Output
    if(!input)
        cout<<"\nFile opening error\n";
    if(!output)
        cout<<"\nFile opening error\n";
        while(!input.eof()){
        getline(input, first_name);
        output<<first_name<<" ";
		count++;
    }
    output.close();
    cout<<count<<"\n";
    return 0;
}