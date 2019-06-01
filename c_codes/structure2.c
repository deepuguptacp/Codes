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
    struct student *p;
    p=&D;
    printf("Enter name and roll number : ");
    scanf("%s %d", p->name, &p->roll_number);
    printf("Enter the marks of 5 subjects : ");
        for(i=0; i<5;i++)
        {
            scanf("%d", &p->subject[i]);
            total_marks=total_marks+p->subject[i];
        }
    printf("Total marks obtained is : %d \n", total_marks);
    printf("Name is : %s\n", p->name);
    printf("Roll number is : %d\n", p->roll_number);
    i=0;
    while(p->name[i]!='\0')
    {
        j++;
        i++;
    }
    if(j%2!=0)
    {
        printf("Middle character is : %c\n", p->name[j/2]);
    }
    else
    {
        printf("Middle character is : %c %c\n", p->name[j/2], p->name[j/2+1] );
    }
    printf("\n");
    return 0;
}
