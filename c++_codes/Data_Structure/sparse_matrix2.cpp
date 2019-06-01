/*
 * C++ program for sparse matrix;
*/
#include<iostream>
using namespace std;
/*
 * Node Declaration
 */
struct node{
    int info;
    int row_number, column_number;
    struct node *row_next;
    struct node *column_next;
};
struct node *header=NULL;
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
        temp->row_number=r;
        temp->column_number=c;
        temp->row_next=NULL;
        temp->column_next=NULL;
        return temp;
    }
}
void insert();
void print();
int main(){
    int operation;
    while(1){
        cout<<"\n0. EXIT\n1. Insert\n2. Print\nYour input : ";
        cin>>operation;
        switch(operation){
            case 0 :
            cout<<"\n";
            print();
            exit(1);
            break;
            case 1 :
            insert();
            break;
            case 2 :
            cout<<"\n";
            print();
            break;
        }
    }
}
/*
  * Insertion of element;
  * value :- Element's value;
  * R :- Row in which the element is present;
  * C :- column in which the element is present;
 */
void insert(){
    int value, R, C;
    cout<<"Enter the row in which element to be inserted : ";
    cin>>row;
    cout<<"Enter the column in which element to be inserted : ";
    cin>>column;
    cout<<"Enter the value to be inserted : ";
    cin>>value;
    struct node *temp;
    p=create_node(value, R, C);
    
}