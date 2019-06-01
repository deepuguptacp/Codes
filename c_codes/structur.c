#include<stdio.h>
struct student
{
   char name[20];
   int roll_number[5];
   int subject[5];
}D;
int main()
{
    int i, j=0, total_marks=0;
    printf("Enter name and roll number : ");
    scanf("%s %d", D.name, &D.roll_number);
    printf("Enter the marks of 5 subjects : ");
        for(i=0; i<5;i++)
        {
            scanf("%d", &D.subject[i]);
            total_marks=total_marks+D.subject[i];
        }
    printf("Total marks obtained is : %d \n", total_marks);
    printf("Name is : %s\n", D.name);
    printf("Roll number is : %d\n", D.roll_number);
    i=0;
    while(D.name[i]!='\0')
    {
        j++;
        i++;
    }
    if(j%2!=0)
    {
        printf("Middle character is : %c\n", D.name[j/2]);
    }
    else
    {
        printf("Middle character is : %c %c\n", D.name[j/2], D.name[j/2+1] );
    }
    printf("\n");
    return 0;
}
