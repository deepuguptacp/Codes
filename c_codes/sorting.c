#include<stdio.h>
int main() {
    int a[8], i, j, temp;
    for(i=0; i<8; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<8; i++) {
        for(j=0; j<8; j++){
            if(a[j]>=a[i]) {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("After sorting\n");
    for(i=0; i<8; i++) {
        printf("%d\t", a[i]);
    }
}