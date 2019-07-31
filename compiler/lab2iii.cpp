// ((a+b)*(c+d)*)^+ + ab*c*d
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i=0,flag=0;
    printf("Enter the string\n");
    scanf("%s",str);
    if (strlen(str)==0)
    { 
        //checking for empty string
        printf("Accepted\n");
    } else {
        while (str[i]!='\0')
        {
            if (str[i]>='a'&&str[i]<='d')
            {
                //checking for others
                flag=1;
            } else {
                flag=0;
                break;
            }
            i++;
        }
        if (flag)
        {
            printf("Accepted\n");
        } else
        {
            printf("Not Accepted\n");
        }
        
        
    }
    return 0;
}