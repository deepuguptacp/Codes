#include<stdio.h>
void display(int (*fun)());
int show();
int (*f)();             // f is a function that return a int pointer.

int main(){
    
    f = show;
    display(f);
    return 0;
}

void display(int (*fun)()){
    (*fun)();
}

int show(){
    printf("IndiaBIX\n");
    return 1;
}