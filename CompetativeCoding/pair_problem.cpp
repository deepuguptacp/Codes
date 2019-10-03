#include<iostream> 
using namespace std; 
  
int numberOfWays(int x) 
{ 
    // Base condition  
    if (x==0 || x==1)      
        return 1;
    else 
        return numberOfWays(x-1) + (x-1)*numberOfWays(x-2); 
} 

int main() 
{ 
    int x, total; 
    cin>>x;
    total = numberOfWays(x);
    cout<<total%10003<<endl; 
    return 0; 
}  