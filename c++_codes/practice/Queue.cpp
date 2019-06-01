#include<stdio.h>
#include<stdlib.h>
struct list{
	int data;
	struct list *next;	
};
struct list *rear = NULL;
struct list *front = NULL;
void enqueue(){
	struct list *ptr, *s, *newnode;
	int n, i;
	printf("How many items u want to insert : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		ptr=front;
		newnode=(struct list*)malloc(sizeof(struct list));
		printf("Enter any data : ");
		scanf("%d",&newnode->data);
		if(front==NULL){
			front->next=newnode;
			newnode->next=NULL;
			rear=newnode;
		}
		else if(rear->next==NULL){
			rear->next=newnode;
			newnode->next=front;
			front=newnode;
			rear=newnode;
		}
		else{
			s=front;
			while(s->next!=NULL)
			{
				s=s->next;
			}
			s->next=newnode;
			newnode->next=NULL;
			rear=newnode;
		}
	}	
}
void dequeue(){
	struct list *ptr;
	ptr=front;
	front=front->next;
	free(ptr);
}
void display(){
	struct list *ptr;
	ptr=front;
	while(ptr->next!=NULL){
		printf("|%d|\n",ptr->data);
		ptr=ptr->next;
	}
	printf("|%d|\n",ptr->data);
}
int main(){
	int ch;
	do{
		printf("\n1.enqueue");
		printf("\n2.dequeue");
		printf("\n3.display");
		printf("\n Enter ur choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			default:
			printf("Invalid choice \nERROR 404 NOT FOUND \n");
		}
	}while(1);
}
