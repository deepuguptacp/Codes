#include<bits/stdc++.h>
using namespace std;

map<index, sum> mp;

struct node {
    int data;
    struct node * left;
    struct node * right;
};
struct node* root = NULL;

struct node * newNode(int data){
    struct node * temp = new node();
    temp->left = temp->right = NULL;
    temp->data = data;
    return temp;
}

// void VerticalSum(struct node * root){
//     struct node * temp;
//     mp.push(0, root->data);


// }


int main(){
    

    return 0;
}