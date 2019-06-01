#include<stdio.h>
int main(){
    char name[10];
    int i=0;
    while(name[i]!='\0')
    {
        putchar(name[i]);
        i++;
    }
    puts(name);
    return 0;
}