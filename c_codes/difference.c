#include<stdio.h>
int main () {
	double a, b, difference;
	printf("Enter the value of a: ");
	scanf("%lf", &a);
	printf("Enter the value of b: ");
	scanf("%lf", &b);
	difference = a - b;
	printf("%lf - %lf : %lf\n", a, b, difference);
	return 0;
}
