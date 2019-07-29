#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

class node												//variable
{
  public:
    char data;
    node * next;										// next pointer for linking to next node
};
node * start=NULL;
void Push(char d)
{
    node * temp=new node;							// create a new node
    if(temp==NULL)
    {
      cout<<"Memory allocation failed";
      return;
    }
    if(start==NULL)									//condition for create first node
    {
        start=temp;									//new node linked to head
        temp->data=d;								//insert data value
        temp->next=NULL;
        return;
    }
    node * t=start;									//inseartion tail position				
    for( ;t->next!=NULL;t=t->next);					//traversing go to the last node
    t->next=temp;
    temp->data=d;
    temp->next=NULL;
}
char Pop()															//delete tail position
{   char k;
    if(start==NULL)
    {
        cout<<"pop failed, Stack is empty\n";
        return k;
    }
    node * t=start,* prev;	
    for( ;t->next!=NULL;t=t->next)							//traversing
          prev=t;
          k=t->data;										//k is ussing for check the outgoing charactor is '('
          if(t->data=='('){
          	prev->next=NULL;							  //if condition is ture then pop the stack one time because we do not want to print it
          return k;}											//return type only use for check the the next element is '(' or not
          cout<<t->data;                                      // print all the data value except '('
          prev->next=NULL;										//delete the last element
          delete t;
          return k;
}
int main(){
	int i;
	char a[50];														//charactor array for inserting the expression
	cout<<"Enter the infix expression like (a+b)\n";
	gets(a);
	cout<<"Inserted Infix Expression\n";
	puts(a);
	cout<<"Postfix expression\n\n";
	for(i=0;a[i]!='\0';i++){									//loop for travering in charactor array 
		if((a[i]<=90&&a[i]>=65)||(a[i]>=97&&a[i]<=122)){
			cout<<a[i];											//print the charactor if that is a alphabet
			if(a[i+1]=='+'||a[i+1]=='-'){						//check privority  if incoming sign is less privority then pop all the sign at '('
				if(a[i-1]=='*'||a[i-1]=='/'||a[i-1]=='^'){
				char m='\0';
		    	while(m!='('){								
				m=Pop();
			}
			}}
			if(a[i+1]=='*'||a[i+1]=='/'){
				if(a[i-1]=='^'){
				char m='\0';
		    	while(m!='('){
				m=Pop();
			}
			}}
		}
		else if(a[i]=='('){
		    Push(a[i]);               //pass sign in the stack
		}
		else if(a[i]=='^')
		Push(a[i]);
		else if(a[i]=='*'||a[i]=='/'){
			Push(a[i]);
		}
		else if(a[i]=='+'||a[i]=='-'){
		   Push(a[i]);
		}
		else if(a[i]==')'){								//pop all the sign at '('   because ')' sign represent that closing a part of expression
			char m='\0';
			while(m!='('){
				m=Pop();
			}
		}
	}
	cout<<"\n";
	return 0;
}
