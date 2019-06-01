#include<stdio.h>
int main(){
    int i, a, factorial=1;
    printf("E any integer : ");
    scanf("%d", &a);
    for(i=a; i>=1; i--)
    {
        factorial = factorial*i;
    }
    printf("Factorial = %d\n", factorial);
}