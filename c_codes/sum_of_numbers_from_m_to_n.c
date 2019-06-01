#include<Stdio.h>
int main()
{
    int m, n, i, sum=0;
    printf("Enter the value of starting number : ");
    scanf("%d", &m);
    printf("Enter the value of ending number : ");
    scanf("%d", &n);
    for(i=m; i<=n;i++)
    {
        sum = sum=i;
    }
    printf("Sum of the numbers is : %d\n", sum);
    return 0;
}