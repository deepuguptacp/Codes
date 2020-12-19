#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};

struct LinkedList{
    struct node* head;
    LinkedList(){
        head = NULL;
    }
    void reverse(){
        struct node* curr = head;
        struct node* prev = NULL;
        struct node *next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    void push(int data){
        struct node* temp = new node(data);
        temp->next = head;
        head = temp;
    }
    void print(){
        struct node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;
    ll.push(20);
    ll.push(30);
    ll.push(40);
    ll.push(1);
    ll.push(22);
    ll.print();
    ll.reverse();
    ll.print();
    return 0;
}
