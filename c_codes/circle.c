#include<stdio.h>
int main(){
	double r, area, circumference;
	double PI = 3.14; // constant variables, always all letters in [A-Z]
	printf("Enter the length of the Radius of the circle : ");
	scanf("%lf", &r);
	area = PI * r * r;
	circumference = 2 * PI * r;
	printf("Area of circle : %lf", area);
	printf("Circumference of circle is : %lf\n", circumference);
	return 0;
}
