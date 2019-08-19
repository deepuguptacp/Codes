#include<iostream>
using namespace std;
int top=-1,top2=-1;
int ar[10],ar2[10];

int pushq1(int n);
int pushq2(int n2);
void popq2();
int popq1();

void push()
{
	int n,i,item,x;
	if(top==-1 && top2==-1)
	{
		cout<<"Enter the no of elements u want to push at a time : ";
		cin>>n;
		cout<<"Enter value : ";
		for(i=0; i<n; i++)
		{
			cin>>item;
			pushq1(item);
		}
	}
	else
	{
		cout<<"Enter the item to be pushed : ";
		cin>>x;
		pushq1(x);
	}

}
void pop()
{
	int x;
	if(top==-1 && top2==-1)
	{
		cout<<"the list is empty";
	}
	else if(top!= -1&& top2==-1)
	{
		
		x=popq1();
		pushq2(x);
	}
	if(top2!=-1)
	{
		popq2();
	}
}
int pushq2(int num)
{
	top2=top2+1;
	ar[top2]=num;
}
int pushq1(int num)
{
	top=top+1;
	ar[top]=num;
}
int popq1()
{
	int item;
	item=ar[top];

	top=top-1;
		return (item);
}
void popq2()
{
	int item;
	item=ar2[top2];
	top2=top2-1;
	
}
void display()
{
	int i,j;
	for(i=top2;i>=0;i--)
	{
		cout<<ar2[i]<<" ";
	}
	for(j=top;j>=0;j--)
	{
		cout<<ar[j]<<" ";
	}
	
}
int main()
{
	int n;
	while(1){
		cout<<"\n1. Push";
		cout<<"\n2. Pop";
		cout<<"\n3. Display";
		cout<<"\n4. EXIT";
		cout<<"\nEnter ur choice : ";
		cin>>n;
		switch(n)
		{
			case 1 :
			push();
			break;
			case 2 :
			pop();
			break;
			case 3 :
			display();
			break;
			case 4 :
			display();
			cout<<"\n\n";
			exit(1);
			default :
			cout<<"Invalid choice.\n";
		}
	}
}

