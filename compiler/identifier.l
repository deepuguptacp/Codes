small [a-z]
capital [A-Z]
digit [0-9]
underscore [_]
%%
^[a - z A - Z _][a - z A - Z 0 - 9 _] * printf("Valid Identifier"); 
printf("Invalid Identifier"); 
% % 
int main() {
    printf("Enter the string : "); 
    yylex(); 
    return 0;
} 
int yywrap(){
    return 1;
}
