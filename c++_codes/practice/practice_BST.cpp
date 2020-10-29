#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
struct node *create_node(int a){
    struct node *temp;
    temp = new(struct node);
    if(temp == NULL){
        cout<<"\nOverflow";
    }
    else{
        temp->data = a;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
}
void insert(struct node *, struct node *);
void print_in_order(struct node *);
int main(){
    int value, operation;
    struct node *temp;
    while(1){
        cout<<"\n0. EXIT\n1. INSERT\n2. PRINT\nYour choice : ";
        cin>>operation;
        switch(operation){
            case 0: 
                print_in_order(root);
                cout<<"\n\n";
                exit(1);
            case 1: cout<<"Enter the data : ";
                cin>>value; 
                temp = create_node(value);
                insert(root, temp);
                break;
            case 2: print_in_order(root);
            break;
            default : cout<<"\nPlease give a valid input.\n";
        }
    }
}
void insert(struct node *tree, struct node *new_node){
    struct node *temp;
    if(root == NULL){
        root = new node;
        root->data = new_node->data;
        root->left = NULL;
        root->right = NULL;
        return;
    }
    if(tree->data > new_node->data){
        if(tree->left!= NULL)
            insert(root->left, new_node);
        else{
            tree->left = new_node;
            tree->left->left = NULL;
            tree->left->right = NULL;
            return;
        }
    }
    else{
        if(tree->right != NULL)
            insert(tree->right, new_node);
        else{
            tree->right = new_node;
            tree->right->left = NULL;
            tree->right->right = NULL;
            return;
        }
    }
}
void print_in_order(struct node *temp){
    if(root==NULL){
        cout<<"\nTree is empty.\n";
        return ;
    }
    if(temp != NULL){
        print_in_order(temp->left);
        cout<<temp->data<<"->";
        print_in_order(temp->right);
    }
}