#include<stdio.h>
int main(){
    int i, a;
    for(a=65; a<=122; a++){
        int flag=0;
        for(i=2; i<=a/2; i++){
            if(a%i==0) {
                flag=1;
                printf("for a = %d\n", i);
                break;
            }
        }
        if(flag==0)
            printf("%d\t", a);
    }
    printf("Program is ghatiya\n");
    return 0;
}