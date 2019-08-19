#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int sub1, sub2, sub3, sub4, sub5, count=0;
    float avg;
    ifstream input;
    ofstream output;
    string first_name, last_name;
    input.open("file_handling1.txt");
    output.open("1.txt"); 
    if(!input)
        cout<<"\nFile opening error\n";
    if(!output)
        cout<<"\nFile opening error\n";
    /*while(!input.eof()){
        input>>first_name>>last_name>>sub1>>sub2>>sub3>>sub4>>sub5;
    }
    avg=(sub1+sub2+sub3+sub4+sub5)/5;
    output<<first_name<<"  "<<last_name<<"  "<<"\nAverage marks secured : "<<avg;*/
    while(!input.eof()){
        getline(input, first_name);
        output<<first_name<<" ";
		count++;
    }
    output.close();
    cout<<count<<"\n";
    return 0;
}
