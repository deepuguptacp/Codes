#include<iostream>
using namespace std;
int queue[10];                  // Declaration of the length of the circular queue.
int front=-1;                   // Front value :- To determine the starting pont of the circular queue.
int rear=-1;                    // Rear value :- To determine the end pont of the circular queue.
void enqueue(int a){            // Function to insert the data in the circular queue.
    if(rear==9&&front==0||rear+1==front)    // Overflow condition.
        cout<<"\nQueue is Full\nOVERFLOW\n";
    else{
        if(rear == -1 && front == -1){
            front=0;
            rear=0;
            queue[rear]=a;
            
        }
        else if(rear == 9 && front!=0){ // Makin the queue circular.
            rear=0;
            queue[rear]=a;
        }
        else{
            rear++;                 // General entry in the circular queue.
            queue[rear]=a;
        }
    }
}
void dequeue(){                     // Function to remove any element from the circular queue.
    if(rear==-1&&front==-1)
        cout<<"\nNo item to delete as queue is empty\nUNDERFLOW\n"; // Underflow condition.
    else if(rear == front){
        rear = -1;
        front = -1;
    }
    else{
        front++;
    }
}
void print(){                           // Function to print the entries from the queue.
    int i;
    for(i=front; i!=rear; i++){
        if(i==10){
            i = 0;
        }
        cout<<queue[i]<<" ";
    }
    cout<<queue[rear]<<"\n";
}
int main(){
    int operation, key;
    while(1){
        cout<<"\n1. Insert\n2. Delete\n3. Print\n4. EXIT\nYour choice : ";
        cin>>operation;
        switch(operation){
            case 1:
            cout<<"\nEnter the element to be inserted : \n";
            cin>>key;
            enqueue(key);
            break;
            case 2 :
            dequeue();
            break;
            case 3 :
            print();
            break;
            case 4 :
            print();
            exit(1);
            default :
            cout<<"\nPlz give a valid input \n";
        }
    }
}