#include<stdio.h>
int main()
{
    char word[40];
    int i, count=0, temp=0, a;
    printf("Enter any word : ");
    scanf("%s", word);
    for(i=0; word[i]!='\0'; i++)
    {
       count++;
    }
    printf("Number of letters entered is %d\n", count);
    while(i<=count)
    {
        if(word[i]=word[count-1])
            temp=1;
        i++;
        count--;
    }
    if(temp==1)
        printf("PALINDROME\n");
    else
        printf("NOT\n");
    printf("Please press 1 to continue\nOR 0 to stop\n ");
    scanf("%d", &a);
    if(a==1)
        main();
    else
        return 0;
}