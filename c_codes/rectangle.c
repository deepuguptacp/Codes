#include<stdio.h>
int main(){
	double a, b, area;
	printf("Enter the length of the length of the rectangle :");
	scanf("%lf", &a);
	printf("Enter the length of the breadth of therectangle :");
	scanf("%lf", &b);
	area = a * b;
	printf("Area the rectangle is = %lf\n", area);
	return 0;
}
