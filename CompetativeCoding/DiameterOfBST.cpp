#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int n){
    struct node* temp = new node;
    temp->data = n;
    temp->left = temp->right = NULL;
    return temp;
}

int height(struct node* root){
    if(!root){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    return 1 + max(lheight, rheight);
}

int Diameter(struct node* root){
    if(!root)
        return 0;
    int lefth = height(root->left);
    int righth = height(root->right);
    int leftD = Diameter(root->left);
    int rightD = Diameter(root->right);
    int D = max(leftD, rightD);
    return max(lefth + righth + 1, D);
}

int main(){
    struct node* root = newNode(4);
    root->left = newNode(2);
    root->left->right = newNode(3);
    root->left->left = newNode(1);
    root->right = newNode(6);
    root->right->left = newNode(5);
    cout<<Diameter(root)<<endl;
}