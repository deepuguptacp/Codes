#include<stdio.h>
//Amstrong number
int main(){
	int i, n, a, sum=0;
	printf("Enter any integral number ");
	scanf("%d", &i);
	i=n;
	while(i!=0){
		a=i%10;
		sum=sum+a*a*a;
		i=i/10;
	}
	if(sum==n){
		printf("The number is amstrong number\n");
	}
	else{
		printf("The number is not amstrong number\n");
	}
	return 0;
}
