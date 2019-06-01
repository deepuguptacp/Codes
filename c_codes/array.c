#include<stdio.h>
int main(){
	int marks[5], i, sum=0;
	for(i=0; i<5; i++)
	{
		printf("Enter number %d: ", i+1);
		scanf("%d", &marks[i]);
		sum += marks[i];
	}
	printf("Sum of the inputs is %d \n",sum);
}
