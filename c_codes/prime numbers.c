#include<stdio.h>
int main(){
    int n, i, temp=0;
	printf("Enter a number to check wheather it is prime or not :\n ");
    scanf("%d", &n);
    for(i=2; i<=n/2; i++)
    {
        if(n/i == 0)
        {
            temp = 1;
            break;
        }
        else
        {
            printf("The number is prime\n");
        }
    }
    if(temp=1)
    printf("The number is prime\n");
    main();
    return 0;
} 
