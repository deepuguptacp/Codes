/*
  C++ program for implementation of single linked list;
*/
#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
/*
 * node<T> Declaration
 */
template<class T>
struct node{
    T info;
    struct node<T> *next;
};
template<class T>
struct node<T> *start=NULL;
/*
 * Creating node<T>
 */
template<class T>
struct node<T> *create_node(T value){
    struct node<T> *temp;
    temp = new (struct node<T>);
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
template<class T>
void insert_begining(T a){
    struct node<T> *temp, *p;
    p = create_node<T>(a);
    if(start<T> == NULL){
        start<T> = p;
        start<T>->next = NULL;
    }
    else{
        temp = start<T>;
        start<T> = p;
        start<T>->next = temp;
    }     
    cout<<"\nnode<T> inserted sucessfully at the begining.";   
}
/*
 * Inserting node<T> at last
 */
template<class T>
void insert_end(T a){
    struct node<T> *temp, *p;
    temp=start<T>;
    p=create_node(a);
    while(temp->next!=NULL)
        temp=temp->next;
    p->next=NULL;
    temp->next=p;
    cout<<"\nnode inserted sucessfully at the end.";
}
/*
 * Insertion of node<T> at a given position
 */
template<class T>
void insert_position(T a, int pos){
    struct node<T> *temp, *s, *ptr;
    temp=create_node(a);
    int i, counter=0;
    s = start<T>;
    while (s != NULL)
    {
        s = s->next;
        counter++;
    }
    if (pos == 1)
    {
        if (start<T> == NULL)
        {
            start<T> = temp;
            start<T>->next = NULL;
        }
        else
        {
            ptr = start<T>;
            start<T> = temp;
            start<T>->next = ptr;
        }
    }
    else if (pos > 1  && pos <= counter)
    {
        s = start<T>;
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
template<class T>
void Delete_begining(){
    struct node<T> *temp;
    temp=start<T>;
    if(start<T>==NULL){
        cout<<"\nNothing to be delteted.";
        exit(1);
    }
    else{
        start<T>=temp->next;
        delete temp;
    }
}
/*
 * Delete element from the end
 */
template<class T>
void Delete_end(){
    struct node<T> *temp, *prev;
    temp=start<T>;
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
template<class T>
void Delete_element(){
    T key;
    cout<<"\nEnter the element you wish to delete : ";
    cin>>key;
    struct node<T> *temp,*prev;
    temp=start<T>;
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
template<class T>
void search(){
    T key, flag=1;
    cout<<"\nEnter the number to be searched in the list : ";
    cin>>key;
    struct node<T> *temp;
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
template<class T>
void print(){
    struct node<T> *temp;
    if(start<T> == NULL){
        cout<<"List is empty.";
        return;
    }
    temp=start<T>;
    while(temp != NULL){
        cout<<temp->info<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
/*
 * Main :contains menu 
 */
int main(){
    clock_t begining, end;
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
    cout<<"\nYour choice : ";
    cin>>operation;
    switch(operation){
            case 0:
            cout<<"\nYour final list is : \n";
            print();
            cout<<"\nExiting..."<<endl;
            cout<<"\n";
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
            default :
            cout<<"\nplease give a valid input";
            break;
        }
    }
}