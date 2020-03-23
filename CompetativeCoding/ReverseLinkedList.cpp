//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1/
/*
  C++ program for implementation of single linked list;
*/
#include<bits/stdc++.h>
using namespace std;
/*
    * Node Declaration
*/
struct node{
    int info;
    struct node *next;
};
struct node *start=NULL;
/*
    * Creating Node
*/
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
    * Inserting element in beginning
*/
void insert_begining(int a){
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
    cout<<"\nNode inserted sucessfully at the begining.";   
}
/*
    * Inserting Node at last
*/
void insert_end(int a){
    struct node *temp, *p;
    temp=start;
    p=create_node(a);
    while(temp->next!=NULL)
        temp=temp->next;
    p->next=NULL;
    temp->next=p;
    cout<<"\nNode inserted sucessfully at the end.";
}
/*
    * Insertion of node at a given position
*/
void insert_position(int a, int pos){
    struct node *temp, *s, *ptr;
    temp=create_node(a);
    int i, counter=0;
    s = start;
    while (s != NULL)
    {
        s = s->next;
        counter++;
    }
    if (pos == 1)
    {
        if (start == NULL)
        {
            start = temp;
            start->next = NULL;
        }
        else
        {
            ptr = start;
            start = temp;
            start->next = ptr;
        }
    }
    else if (pos > 1  && pos <= counter)
    {
        s = start;
        for (i = 1; i < pos; i++)
        {
            ptr = s;
            s = s->next;
        }
        ptr->next = temp;
        temp->next = s;
    }
    else
    {
        cout<<"Positon out of range"<<endl;
    }
}
/*
    * Delete element from the begining
*/
void Delete_begining(){
    struct node *temp;
    temp=start;
    if(start=NULL){
        cout<<"\nNothing to be delteted.";
        exit(1);
    }
    else{
        start=temp->next;
        delete temp;
    }
}
/*
    * Delete element from the end
*/
void Delete_end(){
    struct node *temp, *prev;
    temp=start;
    while(temp->next != NULL){
        prev=temp;
        temp=temp->next;
    }
    prev = NULL;
    delete temp;
}
/*
    * Delete element 
*/
void Delete_element(){
    int key;
    cout<<"\nEnter the element you wish to delete : ";
    cin>>key;
    struct node *temp,*prev;
    temp=start;
    while(temp->info != key){
        prev=temp;
        temp=temp->next;
    }
    prev=temp->next;
    delete temp;
}
/*
    * Searching an element
*/
void search(){
    int key, flag=1;
    cout<<"\nEnter the number to be searched in the list : ";
    cin>>key;
    struct node *temp;
    cout<<"\n***SEARCHING***";
    while(temp->info != key){
        if(temp->info==key){
            cout<<"\nYour element is present";
            flag=0;
        }
        temp=temp->next;
    }
    if(flag==1)
        cout<<"\nThe element is not present"; 
}
/*
    * Display Elements of a link list
*/
void print(){
    struct node *temp;
    if(start == NULL){
        cout<<"List is empty.";
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
    * Reverse the Linked List
    * ITERATIVE METHOD : 
        1 . Initialize three pointers prev as NULL, curr as head and next as NULL.
        2 . Iterate trough the linked list. In loop, do following.
            // Before changing next of current,
            // store next node
            next = curr->next
            // Now change next of current
            // This is where actual reversing happens
            curr->next = prev
            // Move prev and curr one step forward
            prev = curr
            curr = next
*/
void reverse(){
    if(start == NULL){
        cout<<"List is empty.";
        return;   
    }
    else{
        struct node* temp = start;
        struct node* current = start;
        struct node *prev = NULL, *next = NULL;
        while(current!=NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        start = prev;
    }
}
/*
 * Main :contains menu 
*/
int main(){
    clock_t begining, end;
    begining = clock();
    struct node *start;
    start=NULL;
    int value, operation, key;
    while(1){
    cout<<"\n0. EXIT";
    cout<<"\n1. Insert at begining";
    cout<<"\n2. Insert at end";
    cout<<"\n3. Insert at any position";
    cout<<"\n4. Delete at begining";
    cout<<"\n5. Delete at end.";
    cout<<"\n6. Delete required element.";
    cout<<"\n7. Search any element.";
    cout<<"\n8. Reverse the linked list.";
    cout<<"\nYour choice : ";
    cin>>operation;
    switch(operation){
            case 0:
            cout<<"\nYour final list is : \n";
            print();
            cout<<"\nExiting..."<<endl;
            cout<<"\n";
            end = clock();
            cout << "Time required for execution: "<< (double)(end-begining)/CLOCKS_PER_SEC<< " seconds." << "\n\n";
            exit(1);
            break;  
            case 1:
            cout<<"\n**Inserting at begining**";
            cout<<"\nEnter the value : ";
            cin>>value;
            insert_begining(value);
            cout<<"\n";
            print();
            break;
            case 2:
            cout<<"\n**Inserting at end**";
            cout<<"\nEnter the value : ";
            cin>>value;
            insert_end(value);
            cout<<"\n";
            print();
            break;
            case 3 :
            cout<<"\n**Inserting at any position**";
            cout<<"\nEnter the position where you wish to insert : ";
            cin>>key;
            cout<<"\nEnter the value : ";
            cin>>value;
            insert_position(value, key);
            cout<<"\n";
            print();
            break;
            case 4 :
            cout<<"\n**Deleting from begining**";
            Delete_begining();
            cout<<"\n";
            print();
            break;
            case 5 :
            cout<<"\n**Deleting from the end**";
            Delete_end();
            cout<<"\n";
            print();
            break;
            case 6 :
            cout<<"\n**Deleting your element**";
            Delete_element();
            cout<<"\n";
            print();
            break;
            case 7 :
            search();
            break;
            case 8 :
            reverse();
            cout<<endl;
            print();
            break;
            default :
            cout<<"\nplease give a valid input";
            break;
        }
    }
}