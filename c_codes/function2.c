#include<stdio.h>
float avg(int *a)
{
    int sum=0, i;
    float average;
    for(i=0; i<5; i++)
        sum=sum + *(a+i);
    average=(float)sum/5;
    return average;
}
int main()
{
    int a[5], i;
    float average;
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    average=avg(a);
    printf("%f\n", average);
    return 0;
}
