digit [0-9]
decimal [.]
%%
({digit}*decimal|decimal|{digit}*)({digit}{digit}*) printf("VALID! %s \n", yytext);
{digit}*{decimal}{digit}{digit}*(e("+"|"-"){digit}*) printf("VALID! %s \n", yytext);

.* printf("INVALID! %s \n", yytext);
%%
int main(){
    printf("Enter the string : ");
    yylex();
    return 0;
}
int yywrap(){
    return 1;
}