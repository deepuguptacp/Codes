#include<stdio.h>
int fib(int);
int main()
{
    int a, i;
    printf("Enter the number of terms in the series : ");
    scanf("%d", &a);
    printf("The fibbonicci series is : \n");
    for(i=1; i<=a; i++)
    {
        printf("%d\t", fib(i));
    }
    printf("\n");
    return 0;
}
int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}