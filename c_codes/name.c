#include<stdio.h>
int main(){
    int i;
    char name[5];
    for(i=0; i<5; i++) {
        printf("\nEnter the %d letter of your name : ", i+1);
        scanf("%c", &name[i]);
    }
    for(i=0; i<5; i++) {
        printf("%c\n", name[i]);
    }
    return 0;
}