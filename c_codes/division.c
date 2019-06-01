#include<stdio.h>
#include<stdlib.h>
int main () {
	int a, b;
	double division;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);

	if(b == 0) {
		printf(stderr, "Division by zero! Aborting...\n");
    	exit(EXIT_FAILURE); /* indicates failure.*/
	}
	division = (double)a / b;
	printf("%d / %d : %.2lf\n", a, b, division);
	return 0;
}
