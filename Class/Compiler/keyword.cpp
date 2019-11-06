#include <iostream>
#include <string.h>
using namespace std;
int checkKeyword(char var[]){
    char keyword[20][10] = {
        "if", "while", "do", "for", "break", "continue", "int", "double", "float", "else", "else if", "return", "const",
        "short", "long", "unsigned", "this", "struct", "char", "goto"};
    int flag = 0;
    for (int i = 0; i < 20; i++){
        if (strcmp(var, keyword[i]) == 0){
            flag = 1;
            break;
        }
        else
            flag = 0;
    }
    return flag;
}
int main(){
    char var[33]="";

    cout << "Enter the variable name to be checked\n";
    cin >> var;
    int i = 0, flag = 1;
    if (checkKeyword(var) == 1){
        cout << "Keyword\n";
    }
    else if (strlen(var) > 32){
        //checking length of variable
        cout << "Invalid length of variable\n";
    }
    else if (!(var[0] == '_' || (var[0] >= 'A' && var[0] <= 'Z') || (var[0] >= 'a' && var[0] <= 'z'))){
        //checking first letter
        cout << "Invalid character at first place\n";
    }
    else{
        //checking other characters
        for (i = 0; var[i] != '\0'; i++){
            if (!(var[i] == '_' || (var[i] >= 'A' && var[i] <= 'Z') || (var[i] >= 'a' && var[i] <= 'z') || (var[i] >= '0' && var[i] <= '9'))){
                flag = 0;
                break;
            }
        }
        if (!flag){
            cout << "Invalid character present\n";
        }
        else{
            cout << "Valid variable name\n";
        }
    }
    return 0;
}