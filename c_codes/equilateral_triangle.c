#include<stdio.h>
int main(){
	double a, perimeter, area;
	printf("Enter the side length : ");
	scanf("%lf", &a);
	// area = (sqrt(3)/4)*a*a
	area = 0.433 * a * a; 
	perimeter = 3 * a ;
	printf("Area of Equilateral traingle is : %lf\n", area);
	printf("Perimeter of Equilateral traingle is : %lf\n", 														Perimeter);
	return 0;
}
