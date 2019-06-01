#include<stdio.h>
int main () {
	double a, b, sum;
	printf("Enter the value of a: ");
	scanf("%lf", &a);
	printf("Enter the value of b: ");
	scanf("%lf", &b);
	sum = a + b;
	printf("%lf + %lf = %lf\n", a, b, sum);
	return 0;
}
