#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a, y;
    float b, c, sum, difference;
    double division, product;
    printf("Enter any two numbers : \n");
    scanf("%f %f", &b, &c);
    printf("Enter :- \n1 for addition(+) \n2 for difference(-) \n3 for product(*) \n4 for division(/)\n:::::");
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        sum = c + b;
        printf("%f\n", sum);
        break;
    case 2:
        difference = fabs(b-c);
        printf("Difference is : %f\n", difference);
        break;
    case 3:
        product = b*c;
        printf("Product is : %lf\n",product);
        break;
    case 4:
        division = b/c;
        printf("Divisionis : %lf\n", division);
    }
    printf("Enter 1 to continue or 0 to end : ");
    scanf("\n%d", &y);
    if(y=1)
        main();
    else
        end();
    return 0;
}
