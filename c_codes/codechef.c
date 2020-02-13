#include<stdio.h>
void myfun(int* a, int n, int i){
    (i<n) ? printf("%c", ((int*)a) + i++),
    myfun(a, n, i) : 0;
}
int main(){
    int a[]={72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33};
    myfun((int*)a, 12, 0);
    printf("\n");
    return 0;
}