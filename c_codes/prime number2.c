#include<stdio.h>
int prime(int);
int main()
{
    int a, b, k, i;
    printf("Enter two numbers in between prime numberd are to be found :\n");
    scanf("%d%d", &a, &b);
    if(a<b)
    {
    for(i=a; i<=b; i++)
    {
        k=prime(i);
        if(k==1)
            printf("%d  ", i);
    }
    }
    else
    for(i=b; i<=a; i++)
    {
        k=prime(i);
        if(k==1)
            printf("%d  ", i);
    }
    printf("\n");
    return 0;
}
int prime(int p)
{
    int i;
    for(i=2; i<=p/2; i++)
    {
        if(p%i==0)
        {   
            return 0;
        }
        else
            return 1;
    }
}