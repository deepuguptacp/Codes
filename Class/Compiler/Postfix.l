/*          EXPERIMENT NO - 19    Date : 06:11:2019 03:11PM */
%{
    #include<stdlib.h>
    void yyerror(char *);
    #include"Postfix.tab.h"
%}
%%
[0-9]+ {
    yylval=atoi(yytext);
    return INTEGER;
}
[-%()+*\/\n] return *yytext;
[\t] ;
. yyerror("Invalid Token");
%%
int yywrap(void){
    return 1;
}