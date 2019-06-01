#include<stdio.h>
int main()
{
    struct student
    {
        char name[50];
        int roll_number;
    }A;
    struct teacher
    {
        char name[50];
    }B;
    int i;
    printf("Enter your name : ");
    scanf("%s", A.name);
    printf("Enter your roll number : ");
    scanf("%d", &A.roll_number);
    for(i=0; A.name[i]!='\0'; i++)
    {
        B.name[i]=A.name[i];
    }
    printf("%s\n", B.name);
    return 0;
}