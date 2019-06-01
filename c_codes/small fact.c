#include<stdio.h>
int main() {
    int t, i, a, fact=1;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &a);
        for(i=a; i>=1; i--) {
            fact = fact * i;
        }
        printf("%d\n", fact);
    }
    return 0;
}