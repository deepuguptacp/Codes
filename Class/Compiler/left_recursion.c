#include<stdio.h>
#include<string.h>

int checkRecursion(char s[]){
    int i=0;
    if(s[i]==s[i+3])
        return 1;
    else if(s[i+1]!='-' || s[i+2]!='>')
        return 2;
    else
        return 0;
}

void convert(char s[]){
    int i=3;
    char non_terminal=s[0];
    char alpha, beta;
    alpha=s[i+1];
    while(s[i]!=0 && s[i]!='|')  {
        i++; 
    }
    if(s[i]!=0){
        beta=s[i+1];
        printf("%c->%c%c\'\n",non_terminal,beta,non_terminal); 
        printf("\n%c\'->%c%c\'|^\n",non_terminal,alpha,non_terminal); 
    }
    else    
        printf("Grammer can't be reduced\n");
}

int main(){
    int i, flag;
    //scanf("%d", &n);
    char grammer[100]="";

    printf("Enter the grammer : ");
    scanf("%s", grammer);
    flag=checkRecursion(grammer);
    if(flag==1){
        printf("Left Recursive grammer\n");
        convert(grammer);
    }
    else if(flag==0)
        printf("Grammer is correct %s", grammer);
    else    
        printf("Grammer is not in proper format .....PLZ CHECK IT\n");
    printf("\n");
    return 0;
}