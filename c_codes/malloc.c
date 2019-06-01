#include<stdio.h>
#include<stdlib.h>
int sum(int a, int size)
{
    int i, q=0;
    for(i=0; i<size; i++)
    {
        q = q + (a+i);
    }
    return q;
}
int main()
{
    int i, *p, a, summation;
    printf("Enter the size of the array : ");
    scanf("%d", &a);
    p = (int *) malloc (a * sizeof (int));
    printf("Enter the element of the arrray : ");
    for(i=0; i<a; i++)
        scanf(" %d ", (p+i));
    summation = sum(*p, a);
    printf("Sum of elements is %d \n", summation);
    return 0;
}
