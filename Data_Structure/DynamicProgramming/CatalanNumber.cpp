/*
Catalan Numbers: How many binary search trees are there with n vertices?
SOLUTION : Binary Search Tree (BST) is a tree where the left subtree elements are less 
than the root element, and the right subtree elements are greater than the root element. 
This property should be satisfied at every node in the tree. The number of BSTs with n 
nodes is called Catalan Number and is denoted by Cn. For example, there are 2 BSTs with 
2 nodes (2 choices for the root) and 5 BSTs with 3 nodes.
*/
#include<bits/stdc++.h>
using namespace std;
// Recurssive method
int CatalanNumber(int n){
    if(n==0 || n==1){
        return 1;
    }
    int count = 0;
    for(int i = 1; i <= n; i++){
        count += CatalanNumber(i-1) * CatalanNumber(n-i);
    }
    return count;
}
// Using Dynamic Programming
/*int Table[1024];
int CatalanNumber(int n){
    if(Table[n] != 1){
        return Table[n];
    }
    Table[n] = 0;
    for(int i = 1; i <= n; i++){
        Table[n] += CatalanNumber(i-1) * CatalanNumber(n-i); 
    }
    return Table[n];
}*/
int main(){
    int n;
    cout<<"Enter the integral value : ";
    cin>>n;
    cout<<CatalanNumber(n)<<endl;
    return 0;
}