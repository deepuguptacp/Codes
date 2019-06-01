#include<stdio.h>
/**
 * method to find out maximum of two numbers
 *
 * @param: a 
 * @param: b
 */
int max_number(int a, int b) {
	return a>b ? a : b;
}

int main(){
	int a, b, c, max_num;
	printf("Enter any three integers : ");
	scanf("%d %d %d", &a, &b, &c);
	max_num = max_number(a, max_number(b, c));
	printf("max number is: %d\n", max_num);
	return 0;
}
/**
 * Sample I/O:
 * Enter any three integers : 2 3 9
 * max number is: 9
 */