#include<iostream> 
using namespace std; 
  
int numberOfWays(int x) 
{ 
    // Base condition  
    if (x==0 || x==1)      
        return 1; 
  
    // A participant can choose to 
    // (1) Remains single. Number of people  
    //     reduce to (x-1) 
    // (2) Pairs with one of the (x-1) others. 
    //     For every pairing, number of people  
    //     reduce to (x-2).  
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