//https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/12
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
int getCount(struct Node* head){
    int count=1;
    struct Node* temp = head;
    while(temp->next != NULL){
        count++;
        temp = temp->next;
    }
    return count;
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
        cout<<getCount(head)<<endl;
    }
    return 0;
}