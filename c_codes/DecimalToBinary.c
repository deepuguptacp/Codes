#include<stdio.h>
int main(){
    int n, rem, binary=0, revbinary=0;
    printf("Enter a number whose binary form is to be found : ");
    scanf("%d", &n);
    for( ; n>0; n=n/2){
        rem = n%2;
        revbinary = revbinary*10 + rem;
    }
    for( ; revbinary>0; revbinary=revbinary/10){
        rem = revbinary%10;
        binary = binary * 10 + rem;
    }
    printf("Binary form is : %d\n", binary);
    return 0;
}