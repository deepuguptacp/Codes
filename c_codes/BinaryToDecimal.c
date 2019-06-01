#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, rem, decimal=0;
    printf("Enter the binary form of a number : ");
    scanf("%d", &n);
    for(i=0 ; n>0; n=n/10, i++)
    {
        rem = n%10;
        decimal = decimal + rem * pow(2, i);
    }
    printf("Decimal form is : %d", decimal);
    return 0;
}