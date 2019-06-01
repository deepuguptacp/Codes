#include<stdio.h>
#include<stdlib.h>
struct list
{
	int coeff;
	int exp;
	struct list *next;
};
struct list *pstart=NULL;
struct list *qstart=NULL;
struct list *rstart;

	

int createp()
{
	struct list *pptr,*qtr;
	pptr=(struct list*)malloc(sizeof(struct list));
	printf("enter the coeff and exponent");
	scanf("%d",&pptr->coeff);
	scanf("%d",&pptr->exp);
	if(pstart==NULL)
	{
		pstart=pptr;
		pptr->next=NULL;
	}
	else
	{
		qtr=pstart;
		while(qtr->next!=NULL)
		{
			qtr=qtr->next;
		}
		qtr->next=pptr;
		pptr->next=NULL;
	}
	
	
}
int createq()
{
	struct list *qptr,*ptr;
	qptr=(struct list*)malloc(sizeof(struct list));
	printf("enter the coeff and exponent");
	scanf("%d",&qptr->coeff);
	scanf("%d",&qptr->exp);
	if(qstart==NULL)
	{
		qstart=qptr;
		qptr->next=NULL;
	}
	else
	{
		ptr=qstart;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=qptr;
		qptr->next=NULL;
	}
}
int sum()
{
	
	struct list *pptr,*qptr,*newnode,*rptr,*ptr;
  
	pptr=pstart->next;
	qptr=qstart->next;
	rptr=rstart;
	while(pptr!=NULL && qptr!=NULL)
	{
		if(pptr->exp==qptr->exp)
		{
			newnode=(struct list*)malloc(sizeof(struct list));
			rptr->next=newnode;
		
			rptr->coeff=pptr->coeff+qptr->coeff;
			rptr->exp=pptr->exp;
				rptr=newnode;
			rptr->next=NULL;
			pptr=pptr->next;
			qptr=qptr->next;
		}
		else if(pptr->exp > qptr->exp)
		{
			newnode=(struct list*)malloc(sizeof(struct list));
			rptr->next=newnode;
		
			rptr->coeff=pptr->coeff;
			rptr->exp=pptr->exp;
				rptr=newnode;
			rptr->next=NULL;
			pptr=pptr->next;
		}
		else
		{
			newnode=(struct list*)malloc(sizeof(struct list));
			rptr->next=newnode;
		
			rptr->coeff=qptr->coeff;
			rptr->exp=qptr->exp;
				rptr=newnode;
			rptr->next=NULL;
			qptr=qptr->next;
		}
			printf("%d  ",ptr->coeff);
   
   	printf("%d->",ptr->exp);
	}
	if(qptr==NULL &&pptr!=NULL)
	{
		while(pptr!=NULL)
		{
			newnode=(struct list*)malloc(sizeof(struct list));
			rptr=newnode->next;
			
			rptr->coeff=qptr->coeff;
			rptr->exp=qptr->exp;
			rptr=newnode;
			rptr->next=NULL;
			pptr=pptr->next;
		}
			printf("%d  ",ptr->coeff);
   
   	printf("%d->",ptr->exp);
	}
	if(pptr==NULL &&qptr!=NULL)
	{
		while(qptr!=NULL)
		{
			newnode=(struct list*)malloc(sizeof(struct list));
			rptr->next=newnode;
			
			rptr->coeff=qptr->coeff;
			rptr->exp=qptr->exp;
			rptr=newnode;
			rptr->next=NULL;
			qptr=qptr->next;
		}
		
	}
	
   if(rstart==NULL)
   {
   	rstart=rptr;
   	rptr->next=NULL;
   }
   else
   {
   	
   
   ptr=rstart;
   while(ptr!=NULL)
   {
   	printf("%d  ",ptr->coeff);
   
   	printf("%d->",ptr->exp);
   		ptr=ptr->next;
   }
	
}
}
int main()
{
	 rstart=(struct list*)malloc(sizeof(struct list));
   rstart->coeff=0;
   rstart->exp=0;
   rstart->next=NULL;
	int ch;
	do{
		printf("\n1.first polynomial");
		printf("\n2.second polynomial");
		printf("\n3.sum");
		printf("\n4.display");
		printf("enter ur choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:createp();
			break;
			case 2:createq();
			break;
			case 3:sum();
			break;
			default:printf("invalid choice");
		}
	}while(1);
}