#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("Enter a number to find its factorial : ");
    scanf("%d", &a);
    printf("Factorial of %d is %d\n", a, fact(a));
    return 0;
}
int fact(int p)
{
    if(p<=1)
        return 1;
    else
        return (p*fact(p-1));
}
