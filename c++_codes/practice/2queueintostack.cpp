#include<stdio.h>
int front=-1;
int rear=-1;
int front2=-1;
int rear2=-1;

int ar[10];
int ar2[10];
int pushq1(int n1)
{
	rear=rear+1;
	ar[rear]=n1;
}
int pushq2(int n2)
{
	rear2=rear2+1;
	ar2[rear2]=n2;
}
int popq1()
{
	int item;
	item=ar[front];
	front=front+1;
	return(item);
}
int popq2()
{
	int item;
	item=ar2[front2];
	front2=front2+1;
	return(item);
}

void push()
{
	int n,i,m;
	if(rear==-1&&rear2==-1)
	{
		printf("enter the no of elements u want to add");
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&n);
			if(rear==-1&&rear2==-1)
			{
				pushq1(n);
			}
			else if(rear==-1&&rear2!=-1)
			{
				pushq2(n);
			}
			else if(rear2==-1&&rear!=-1)
			{
				pushq1(n);
			}
			
		}
	}
}
void pop()
{
	int x,y;
	if(rear==-1&&rear2==-1)
	{
		printf("list is empty");
	}
	else if(rear2!=-1)
	{
		while(rear2!=front2)
		{
			
		
		x=popq2();
		pushq1(x);
	}
	popq2();
	}
	else
	{
		while(rear!=front)
		{
			y=popq1();
			pushq2(y);
		}
		popq1();
	}
	
}
void display()
{
	int i,j;
	if(rear==-1&&rear2==-1)
	{
		printf("no element to display\n");
	}
	else if(rear==-1&&rear2!=-1)
	{
		for(i=rear2;i>=front2;i--)
		{
			printf("%d\n",ar[i]);
		}
	}
	else
	{
		for(j=rear;j>=front;j--)
		{
			printf("%d\n",ar[j]);
		}
	}
}
int main()
{
	int ch;do{
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.display");
		printf("\n enter ur choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			default:printf("invalid");
				
			}
		}while(1);
	}


