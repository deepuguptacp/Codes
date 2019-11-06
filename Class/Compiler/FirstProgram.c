/*
    (ab*c + a*bc + def)+
*/
#include<stdio.h>
#include<string.h>
int main(){
    int flag=0, i=0, j;
    char str[100]="";
    scanf("%s", str);
    while(str[i]!='\0'){
        if(str[i++]=='a'){
            if(str[i++]=='b'){
                j=i;
                while(str[j]=='b'){
                    j++;
                    i=j;
                }
                if(str[i++]=='c'){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
            }
            else if(str[i++]=='a'){
                j=i;
                while(str[j]=='a'){
                    j++;
                    i=j;
                }
                if(str[i++]=='d'){
                    if(str[i++]=='e'){
                        flag=1;
                    }
                    else{
                        flag=0;
                        break;
                    }
                }
                else{
                    flag=0;   
                    break;
                }
            }
            else{
                flag=0;  
                break;
            }
        }
        else if(str[i++]=='d'){
            //printf("D\n");
            if(str[i++]=='e'){
                //printf("E\n");
                flag=1;
                if(str[i++]=='f'){
                    //printf("F\n");
                    flag=1;
                }
                else{
                    flag=0;   
                    break;
                }
            }
            else{
                flag=0;
                break;
            }
        }
        else{
            //printf("else\n");
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("ACCEPTED!\n");
    }
    else{
        printf("INVALID STRING!\n");
    }

    return 0;
}