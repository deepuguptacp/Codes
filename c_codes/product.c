#include<stdio.h>
int main () {
	double a, b, product;
	printf("Enter the value of a: ");
	scanf("%lf", &a);
	printf("Enter the value of b: ");
	scanf("%lf", &b);
	product = a * b;
	printf("%lf * %lf :%lf\n", a, b, product);
	return 0;
}
