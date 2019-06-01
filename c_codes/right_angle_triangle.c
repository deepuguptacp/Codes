#include<stdio.h>
int main(){
	double a, b, area;
	printf("Enter the length of the base of the triangle : ");
	scanf("%lf", &a);
	printf("Enter the length of the perpendicular of the 													triangle : ");
	scanf("%lf", &b);
	area = 0.5 * a * b;
	printf("Area the right angle triangle is = %lf\n", area);
	return 0;
}
