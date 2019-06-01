#include<stdio.h>
int fact(int); //interoduction of funcion
int main()
{
    int a, factorial, b;
    printf("Enter a number to find its factorial : ");
    scanf("%d", &a);
    //show error if negative number is entered
    if(a<=0)
        printf("Please give a valid input\n");
    else
    {
        factorial = fact(a);
        printf("Factorial is : %d\n", factorial);
    }
    printf("Pres 1 to continue OR 0 to end : ");
    scanf("%d", &b);
    if(b==1)
        main();
    else if(b==0)
        return 0;
}
int fact(int n)
{
    if(n<=1)
        return 1;
    else
        return (n*fact(n-1));
}