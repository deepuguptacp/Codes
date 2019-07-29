/*
 * C++ program for sparse matrix;
*/
#include<iostream>
using namespace std;
/*
 * Node Declaration
*/
struct node{
    int data, row, column;
    struct node *next;
};
struct node *start=NULL;
/*
 * Creating node of struct type;
 * value :- Element's value;
 * r :- Row in which the element is present;
 * c :- column in which the element is present;
*/
struct node *create_node(int value, int r, int c){
    struct node *temp;
    temp = new (struct node);
    if(temp == NULL){
        cout<<"Memory not allocated"<<endl;
        return 0;
    }
    else{
        temp->data=value;
        temp->row=r;
        temp->column=c;
        temp->next=NULL;
        return temp;
    }
}
void insert(int a);
//void insert(int a, int pos);
void Delete();
void print();
void search();
void search_row_wise();
void search_column_wise();
/*
 * Main :contains menu 
 */
int main(){
    int operation, value, key;
    while(1){
        cout<<"\n0. EXIT\n1. Insert the element\n2. Delete any element\n3. Search\n4. PRINT\n5. Search row wise\n6. Search column wise\nYour input : ";
        cin>>operation;
        switch(operation){
            case 0 :
            print();
            cout<<"\n\n";
            exit(1);
            break;
            case 1 :
            cout<<"Enter the value to be inserted : ";
            cin>>value;
            /*cout<<"Enter the position where the element is to be inserted : ";
            cin>>key;*/
            insert(value/*, key*/);
            break;
            case 2 :
            Delete();
            break;
            case 3 :
            search();
            break;
            case 4 :
            print();
            break;
            case 5 :
            search_row_wise();
            break;
            case 6 :
            search_column_wise();
            break;
            default :
            cout<<"Give any valid input.";
            break;
        }
    }
    return 0;
}
/*
 * Insertion of element;
 * value :- Element's value;
 * r :- Row in which the element is present;
 * c :- column in which the element is present;
 */
void insert(int value){
    int row, column;
    cout<<"Enter the row in which element to be inserted : ";
    cin>>row;
    cout<<"Enter the column in which element to be inserted : ";
    cin>>column;
    struct node *temp, *p, *s;
    p = create_node(value, row, column);
    temp=start;
    if(start == NULL){
        start=p;
        start->next=NULL;
        return ;
    }
    while(temp->next!=NULL)
        temp=temp->next;
    if(temp->next==NULL){
        temp->next=p;
    }
    else{
        s=temp->next;
        p->next=s;
        temp->next=p;
    }
}
/*
* Deletion of element;
* a :- Row from which data is to be deleted;
* b :- Column from which data isto be deleted;
*/
void Delete(){
    int a, b;
    cout<<"Enter the row and column respectively from which the data is to be removed : ";
    cin>>a>>b;
    struct node *temp, *p, *prev;
    temp=start;
    while(temp->row!=a && temp->column!=b){
        prev=temp;
        temp=temp->next;
    }
    if(start==NULL)
        cout<<"No any element to be deleted.";
    else if(temp->next==NULL){
        prev->next=NULL;
        delete temp;
    }
    else{
        p=temp->next;
        prev->next=p;
        delete temp;
    }
}
/*
 * Searching any element in given Row and Column;
 * R :- Row in which element is to be searched;
 * C :- Column in which element is to be searched;
*/
void search(){
    int R, C;
    struct node *temp;
    cout<<"Enter the row and column respectively in which element is to be searched : ";
    cin>>R>>C;
    temp=start;
    while(temp->row!=R && temp->column!=C)
        temp=temp->next;
    cout<<"Element in "<<R<<" row and "<<C<<" column is : "<<temp->data;
}
/*
 * Searching the elements present in a particular row
 * R :- Row in which element is to be searched
*/
void search_row_wise(){
    int R;
    cout<<"Enter the row in which in which element is to be searched : ";
    cin>>R;
    struct node *temp;
    temp=start;
    cout<<"Elements present in row "<<R<<"are : ";
    while(temp!=NULL){
        if(temp->row==R)
            cout<<" "<<temp->data<<" ";
        temp=temp->next;
    }
    
}
/*
 * Searching the elements present in a particular column;
 * C :- Column in which element is to be searched
*/
void search_column_wise(){
    int C;
    cout<<"Enter the column in which in which element is to be searched : ";
    cin>>C;
    struct node *temp;
    temp=start;
    cout<<"Elements present in column "<<C<<" are : ";
    while(temp!=NULL){
        if(temp->column==C)
            cout<<" "<<temp->data<<" ";
        temp=temp->next;
    }
    
}
/*
 * Printing of sparse matrix;
 * R :- Row in which the element is present;
 * C :- Column in which the element is present;
*/
void print(){
    struct node *temp;
    int R, C;
    if(start == NULL){
        cout<<"NO element in the matrix.";
        return;
    }
    temp=start;
    cout<<"START->";
    while(temp!=NULL){
        cout<<temp->data<<"(R="<<temp->row<<" C="<<temp->column<<")->";
        temp=temp->next;
    }
    cout<<"NULL";
}