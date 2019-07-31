//(0+1)* + (0*1*)
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, flag = 0;
    printf("Enter the string\n");
    scanf("%s", str);
    if (strlen(str) == 0)
    {
        //checking empty string
        printf("String Accepted\n");
    }
    else
    {
        while (str[i] != '\0')
        {
            //checking string for any combination of 0 and 1
            if (str[i] == '0' || str[i] == '1')
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
            i++;
        }
        if (flag)
        {
            printf("Accepted\n");
        }
        else
        {
            printf("Not Accepted");
        }
    }
    main();
    return 0;
}