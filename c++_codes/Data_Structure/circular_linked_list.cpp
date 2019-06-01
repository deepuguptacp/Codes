#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *create_node(int a){
    struct node *temp;
    temp = new(struct node);
    if(temp == NULL){
        cout<<"Memory not allocated.\n";
        return 0;
    }
    else{
        temp->data = a;
        temp->next = NULL;
        return temp;
    }
}
void insert_begining();
void insert_end();
//void insert_position();
/*void Delete();
void search();*/
void print();
int main(){
    int opr;
    while(1){
        cout<<"\n----------------------------\n";
        cout<<"OPERATION ON CIRCULAR LIST";
        cout<<"\n----------------------------\n";
        cout<<"\n0.EXIT\n1. Insert Begining\n2. Insert end\n3. Insert position\n4. Delete\n5. Search\n6. Print\n";
        cout<<"Your choice : ";
        cin>>opr;
        switch(opr){
            case 0 :print();cout<<"\n";exit(1);
            case 1 :insert_begining();break;
            case 2:insert_end();break;
            /*case 3:insert_position();break;
            case 4:Delete();break;
            case 5:search();break;*/
            case 6:print();break;
            default : cout<<"\nGive any valid input.";break;
        }
    }
}
void insert_begining(){
    int key;
    cout<<"\nEnter the value to be inserted : ";
    cin>>key;
    struct node *temp, *s;
    s = create_node(key);
    temp = start;
    if(temp = NULL){
        temp = s;
        temp->next = start;
    }
    else{
        start->next = s;
        s->next = temp;
    }
}
void insert_end(){
    int key;
    cout<<"\nEnter the value to be inserted : ";
    cin>>key;
    struct node *temp, *s;
    s = create_node(key);
    temp = start->next;
    while(temp!=start)
        temp=temp->next;
    temp->next = s;
    s->next = start;
}
void print(){
    struct node *temp;
    temp = start->next;
    if(start = NULL)
        cout<<"\nLIST IS EMPTYY\n";
    else{
        while(temp!=start){
            cout<<temp->data;
            temp=temp->next;
        }
    }
}