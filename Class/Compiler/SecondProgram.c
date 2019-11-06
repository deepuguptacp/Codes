/*
    (0+1)* + (0*1*)
*/
#include<stdio.h>
#include<string.h>

int main() {
    int flag=0, i=0, j;
    char str[100]="";
    scanf("%s", str);
    if(strlen(str) == 0)
        flag =1;
    while(str[i]!='\0'){
        if(str[i] == '0' || str[i] == '1')
            flag = 1;
        else{
                flag = 0;
                break;
        }
        i++;
    }
    if(flag == 1)
        printf("ACCEPTED!\n");
    else{
            printf("INVALID STRING!\n");
    }
    return 0;
}