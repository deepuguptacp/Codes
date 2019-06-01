#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n], i;
    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
