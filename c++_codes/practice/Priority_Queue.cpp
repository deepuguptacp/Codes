#include<stdio.h>
struct list{
	int data;
	int priority;
};
struct list ar[5];
void insert()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter data and priority");
		scanf("%d%d",&ar[i].data,&ar[i].priority);
		
	}
}
int gethigh()
{
	int i,j,max,pos;
	for(i=0;i<5;i++)
	{
	   for(j=0;j<4;j++)
	   {
	   
	    	if(ar[j].priority<ar[j+1].priority)
	    	{
	    		max=ar[j].data;
	    		pos=j;
		}
		}
	}
	printf("max=%d",max);
	return(pos);
}
void deletehigh()
{
	int i,j,max,pos;
	for(i=0;i<5;i++)
	{
	   for(j=0;j<4;j++)
	   {
	   
	    	if(ar[j].priority<ar[j+1].priority)
	    	{
	    		max=ar[j].data;
	    		pos=j;
		}
		}
	}
	for(i=pos;i<5;i++)
	{
		ar[i]=ar[i+1];
	}
}

int main()
{
	int b,i;
	insert();
	b=gethigh();
	deletehigh();
	printf("the final array is");
	for(i=0;i<5;i++)
	{
		printf("%d",ar[i]);
	}
	return 0;
}
