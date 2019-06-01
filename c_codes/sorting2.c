#include<stdio.h>
int main() {
    int t;
    printf("Enter the number of terms : ");
    scanf("%d", &t);
    int a[t], i, temp, p;
    printf("Enter the values : \n");
    for(i=0; i<t; i++) {
        scanf("%d", &a[i]);
    }
    p=(t-1);
    while(p--){
        for(i=0; i<t; i++) {
            if(a[i]>=a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("After sorting : \n");
    for(i=0; i<t; i++) {
        printf("%2d  ", a[i]);
    }
    printf("\n");
    return 0;
}