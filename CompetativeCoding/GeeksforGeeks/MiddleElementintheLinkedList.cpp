//https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1/
/*
CONCEPT:-
    Traverse linked list using two pointers. Move one pointer by one 
    and other pointer by two. When the fast pointer reaches end slow 
    pointer will reach middle of the linked list.

*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
void Insert(struct Node** head_ref, int new_data){
    struct Node* new_node = new Node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
int middle(struct Node* head){
    struct Node *slow_ptr = head;
    struct Node *fast_ptr = head;
    if (head!=NULL){  
        while(fast_ptr != NULL && fast_ptr->next != NULL){  
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
    }
    return slow_ptr->data;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        struct Node* head = NULL;
        int n, l;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>l;
            Insert(&head, l);
        }
        cout<<middle(head)<<endl;
    }
    return 0;
}