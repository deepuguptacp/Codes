#include<iostream>
#include<cstdlib>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
struct node *create_node(int a){
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
void insert(struct node *, struct node *);
/*void Delete(struct node *, int );*/
void display(struct node *, int);
void print_in_order(struct node *);
void print_pre_order(struct node *);
void print_post_order(struct node *);
void search(struct node *, struct node *);
int main(){
    struct node *temp;
    int operation, key;
    while(1){
        cout<<"\n0. EXIT\n1. Insert\n2. Delete\n3. Display the tree\n4. Print in order\n5. Print pre order\n6. Print post order\nYour choice : "<<endl;
        cin>>operation;
        switch(operation){
            case 0 :
            display(root, 1);
            cout<<"\n\n\n";
            exit(1);
            case 1 :
            cout<<"Enter the value to be inserted : ";
            cin>>key;
            temp = create_node(key);
            insert(root, temp);
            break;
            /*case 2 :
            Delete(root);
            break;*/
            case 3 :
            display(root, 1);
            break;
            case 4 :
            print_in_order(root);
            break;
            case 5 :
            print_pre_order(root);
            break;
            case 6 :
            print_post_order(root);
            break;
            default :
            cout<<"Please give a valid input"<<endl;
            break;
        }
    }
    return 0;
}
void insert(struct node *tree, struct node *new_node){
    if(root == NULL){
        root = new node;
        root->data=new_node->data;
        root->left = NULL;
        root->right = NULL;
        cout<<"\nRoot node is added."<<endl;
        return;
    }
    if(tree->data == new_node->data){
        cout<<"\nElement already exist."<<endl;
        return;
    }
    if(tree->data > new_node->data){
        if(tree->left != NULL){
            insert(tree->left, new_node);
        }
        else{
            tree->left = new_node;
            tree->left->left = NULL;
            tree->left->right = NULL;
            cout<<"\nNode added on the left side."<<endl;
            return;
        }
    }
    else{
        if(tree->right != NULL){
            insert(tree->right, new_node);
        }
        else{
            tree->right = new_node;
            tree->right->left = NULL;
            tree->right->right = NULL;
            cout<<"\nNode added on the right side."<<endl;
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
void print_pre_order(struct node *temp){
    if(root==NULL){
        cout<<"\nTree is empty.\n";
        return ;
    }
    if(temp != NULL){
        cout<<temp->data<<"->";
        print_pre_order(temp->left);
        print_pre_order(temp->right);
    }
}
void print_post_order(struct node *temp){
    if(root==NULL){
        cout<<"\nTree is empty.\n";
        return ;
    }
    if(temp != NULL){
        print_post_order(temp->left);
        print_post_order(temp->right);
        cout<<temp->data<<"->";
    }
}
void display(struct node *ptr, int level){
    int i;
    if (ptr != NULL){
        display(ptr->right, level+1);
        cout<<endl;
        if (ptr == root)
            cout<<"Root->:  ";
        else{
            for (i = 0; i < level; i++)
                cout<<"       ";
	    }
        cout<<ptr->data;
        display(ptr->left, level+1);
    }
}