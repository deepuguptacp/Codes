#include<stdio.h>
int main(){
	double a, area;
	printf("Enter the length of the side of the square : ");
	scanf("%lf", &a);
	area = a * a;
	printf("Area the square is = %lf\n", area);
	return 0;
}
