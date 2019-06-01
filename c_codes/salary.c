#include<stdio.h>

int main(){
	
	int BS, DA, HRA, salary;
	printf("Enter the Basic Salary: ");
	scanf("%d", &BS);

	if ( BS >= 5000 ) {
		HRA = 1000;
		DA = BS/10;
	} else {
		HRA = 500;
		DA = BS/20;
	}
	salary = BS + DA + HRA;
	printf("Your salary is : Rs.  %d\n", salary);

	return 0;
}
