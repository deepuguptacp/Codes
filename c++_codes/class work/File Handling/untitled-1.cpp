#include<iostream>
using namespace std; 
  
int main(int argc, char** argv) 
{ 
    cout << "You have entered " << argc-1 << " arguments. " << "\n"; 
    cout<<"You entered :- \n";
    for (int i = 1; i < argc; ++i) 
        cout << argv[i]<<" "; 
    cout<<"\n";
    return 0; 
} 