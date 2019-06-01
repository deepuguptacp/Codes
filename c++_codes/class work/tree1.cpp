#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
struct node * create_node(int a){
    struct node *temp;
    temp=new(struct node);
    if(temp==NULL){
        cout<<"\nMemory not allocated\n";
        return 0;
    }
    else{
        temp->data = a;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
}
void insert_left(){
    int value;
    cout<<"\nEnter the value to be inserted\n";
    cin>>value;
    struct node *temp, *s;
    temp=root;
    s = create_node(value);
    if(temp->left==NULL){
        temp->left=s;
        return ;
    }
    else{
        while(temp->left!=NULL)
            temp=temp->left;
        temp->left = s;
        s->left=NULL;
        s->right=NULL;
    }
}
void insert_right(){
    int value;
    cout<<"\nEnter the value to be inserted\n";
    cin>>value;
    struct node *temp, *s;
    temp=root;
    s = create_node(value);
    if(temp->right==NULL){
        temp->right=s;
        return ;
    }
    else{
        while(temp->right!=NULL)
            temp=temp->right;
        temp->right = s;
        s->left=NULL;
        s->right=NULL;
    }
}
void print_inorder(struct node *temp){
    if(temp==NULL){
        cout<<"\n..\n";
        return ;
    }
    else{
        print_inorder(temp->left);
        cout<<temp->data<<"->";
        print_inorder(temp->right);
    }
}
int main(){
    int root_value;
    cout<<"Enter the root value : ";
    cin>>root_value;
    root->data = root_value;
    int operation, key;
    while(1){
        cout<<"\n1. Insert Left\n2. Insert Right\n3. Print In Order\n4. Exit...\n Your choice :- ";
        cin>>operation;
        switch(operation){
            case 1:
            insert_left();
            break;
            case 2:
            insert_right();
            break;
            case 3:
            print_inorder(root);
            break;
            case 4:
            print_inorder(root);
            exit(1);
        }
    }
    cout<<"\n\n";
}
