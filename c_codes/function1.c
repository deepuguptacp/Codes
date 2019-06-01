#include<stdio.h>
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int i, j, sum;
    scanf("%d%d", &i,&j);
    sum = add(i, j);
    printf("Sum of the numbers is %d", sum);
    main();
    return 0;
}