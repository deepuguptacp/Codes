/*
 * C++ Program to implement stack using linked list
*/
#include<iostream>
#include<time.h>
#include<cstdlib>
#include<cstdio>
using namespace std;
/*
 * Declaration of Node
 */
struct node{
    int info;
    struct node *next;
};
/*
 * Creating Node
 */
struct node *start = NULL;
struct node *create_node(int value){
    struct node *temp;
    temp = new (struct node);
    if(temp == NULL){
        cout<<"Memory not allocated"<<endl;
        return 0;
    }
    else{
        temp->info=value;
        temp->next=NULL;
        return temp;
    }
}
/*
 * Inserting element at the top
 */
void push(int a){
    struct node *temp, *p;
    p = create_node(a);
    if(start == NULL){
        start = p;
        start->next = NULL;
    }
    else{
        temp = start;
        start = p;
        start->next = temp;
    }        
}
/*
 * Deleting element from the top
 */
void pop(){
    struct node *temp;
    if(start == NULL){
        cout<<"Stack is empty.";
        exit(1);
    }
    else{
        temp=start;
        start=temp->next;
        delete temp;
    }
}
/*
 * Display Elements of a stack
 */
void print(){
    struct node *temp;
    if(start == NULL){
        cout<<"stack is empty.";
        return;
    }
    temp=start;
    while(temp != NULL){
        cout<<temp->info<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
/*
 * Main: Conatins Menu
*/
int main(){
    clock_t begining, end;
    begining = clock();
    struct node *start;
    start = NULL;
    int value, operation;
    while(1){
        cout<<"\n1. Push the element in the stack.";
        cout<<"\n2. Pop the element from the stck.";
        cout<<"\n3. EXIT.";
        cout<<"\n Your choice : ";
        cin>>operation;
        switch(operation){
            case 1 :
            cout<<"Enter the element to be pushed : ";
            cin>>value;
            push(value);
            cout<<"\n";
            print();
            break;
            case 2 :
            pop();
            cout<<"\n";
            print();
            break;
            case 3 :
            cout<<"\n";
            print();
            end = clock();
            cout << "Time required for execution: "<< (double)(end-begining)/CLOCKS_PER_SEC<< " seconds." << "\n\n";
            exit(1);
            default :
            cout<<"\nPlease give a valid input.";
        }
    }
}