#include<stdio.h>
#include<math.h>
#include<stdlib.h>          // Standard library that contains abs function.
int main(){
    int num1, num2, sum, difference, product; //num1, num2 :- Variables to input the two integers
    printf("Enter the two numbers : ");       //sum:- Variable to store the sum, difference:-Variable to store the difference
    scanf("%d %d", &num1, &num2);             // product:- Variable to store the product
    sum=num1+num2;                            //Adding the two numbers and stored in sum variable
    difference=abs(num1-num2);                // Substraction abs used to calculate absolute difference
    product=num1*num2;                        //Multiplication and stored in product variable
    printf("\nSum : %d", sum);
    printf("\nDifference : %d", difference);
    printf("\nProduct : %d", product);
    printf("\n");
    return 0;
}