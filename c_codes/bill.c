#include<stdio.h>

int main(){
	
	int ammount, total;
	printf("Enter your ammount: ");
	scanf("%d", &ammount);
	
	if ( ammount >= 1000 ) {
		printf("you have got 10%% discount\n");
		total = ammount - (ammount/10);
		printf("Your ammount is = Rs. %d\n", total);
	} else {
		printf("ammount: %d\n",  ammount);
	}
	
	return 0;
}
