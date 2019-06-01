#include<stdio.h>
 void quicksort(int ,int ,int []);
void swap(int*,int*);
int main()
{
	int i,n ,a[10];
	printf("enter the array no:");
	scanf("%d",&n);
	printf("enter the array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(0,n-1,a);
	for(i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
}
 void quicksort(int low,int high,int a[10])
{
	int pivot,arrow,i,n;
	pivot =low;
	arrow=high;
	if(low<high)
	{
		while(pivot!=arrow)
		{
			if(pivot<arrow)
			{
				if(a[arrow]<a[pivot])
				{
				 swap(&pivot,&arrow);
				 swap(&a[pivot],&a[arrow]);
			//	printf("%d",a[i]); 
				 arrow++;
				}
				else
			arrow--;
			}
		else if(pivot>arrow) 
		{
		if(a[pivot]<a[arrow])
		{
			swap(&pivot,&arrow);
			swap(&a[pivot],&a[arrow]);
			//printf("%d",a[i]);
			arrow--;
		}
		else
		arrow++;
	}
	printf("\n");
	
printf("\n");	
}
quicksort(low,pivot-1,a);
quicksort(pivot+1,high,a);
}
}
void swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
