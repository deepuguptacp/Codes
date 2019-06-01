#include<stdio.h>
int main()
{
    char a[50];
    printf("Enter : \n");
    scanf("%[^\n]s", a); //"%[^\n]s" is used to scan the whole sentence.
    printf("\n %s\n", a);
}
