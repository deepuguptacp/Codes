#include<stdio.h>
int main()
{
    int a, i, n, sum=0;
    printf("Enter an number whose sum of digits is to be found: ");
    scanf("%d", &a);
    while(n!=0)
    {
        n=a%10;
        a=a/10;
        sum = sum+n;
        i++;
    }
    printf("Sum of the digits is : %d\n", sum);
    return 0;
}