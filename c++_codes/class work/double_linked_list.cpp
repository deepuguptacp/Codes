/*
 * C++ Program to Implement Doubly Linked List 
*/
#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
/*
 * Node Declaration
*/
struct node{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *start=NULL;
struct node *create_node(int value){
    struct node *new_node;
    new_node=new(struct node);
    new_node->info=value;
    new_node->next=NULL;
    new_node->prev=NULL;
    return new_node;
}
void insert_begining(int );
void insert_end(int );
void Delete(int);
void print();
/*
 * Main: Conatins Menu
*/
int main(){
    int operation, value, key;
    while(1){
        cout<<"\n0. EXIT";
        cout<<"\n1. Insert a node at begining";
        cout<<"\n2. Insert a node at the end";
        cout<<"\n3. Delete any element";
        cout<<"\nYour input : ";
        cin>>operation;
        switch(operation){
            case 0 :
            cout<<"\nYour list is : ";
            print();
            cout<<"\n\nEXITING.....\n\n";
            exit(1);
            case 1 :
            cout<<"Enter the value you wish to input : ";
            cin>>value;
            insert_begining(value);
            cout<<"\n**Node inserted sucessfully**\n";
            cout<<"\nYour list is : ";
            print();
            break;
            case 2 :
            cout<<"Enter the value you wish to enter : ";
            cin>>value;
            insert_end(value);
            cout<<"\nYour list is : ";
            print();
            break;
            case 3 :
            cout<<"Enter the element to be deleted : ";
            cin>>key;
            Delete(key);
            cout<<"\nYour list is : ";
            print();
            break;
            default :
            cout<<"\nGive any valid input";
            break;
        }
    }
    cout<<"\n";
}
/*
 * Inserting element in the Doubly Link List at the begining
*/
void insert_begining(int a){
    struct node *temp,*p;
    p=create_node(a);
    if(start==NULL){
        start=p;
        start->next=NULL;
        start->prev=NULL;
    }
    else if(temp->next!=NULL){
        temp=start;
        start=p;
        start->next=temp;
        start->prev=NULL;
    }
}
void insert_end(int a){
    struct node *temp, *p;
    temp=start;
    p=create_node(a);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;
    p->prev=temp;
    p->next=NULL;
}
/*
 * Deletion of element from the list
*/
void Delete(int a){
    struct node *temp, *s;
    temp=start;
    if(start==NULL){
        cout<<"No element to be deleted.";
        return;
    }
    while(temp->info!=a)
        temp=temp->next;
    s=temp;
    temp->prev->next=temp->next;
    temp->next->prev=s->prev;
    delete s;
    delete temp;
}
/*
 * Display elements of Doubly Link List
*/
void print(){
    struct node *temp;
    temp=start;
    cout<<"START";
    while(temp!=NULL){
        cout<<"<-"<<temp->info<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}