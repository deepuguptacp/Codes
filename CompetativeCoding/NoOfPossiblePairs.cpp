//https://www.geeksforgeeks.org/count-possible-combinations-of-pairs-with-adjacent-elements-from-first-n-numbers/
#include<iostream>
using namespace std;
int Pairs(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return result+1;
    else
        return Pairs(n-1) + Pairs(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<Pairs(n)<<endl;
    return 0;
}
/*
Input : N = 4
Output : 5
Explanation : 
If N = 4, the possible combinations are:
{1}, {2}, {3}, {4}
{1, 2}, {3, 4}
{1}, {2, 3}, {4}
{1}, {2}, {3, 4}
{1, 2}, {3}, {4}
*/