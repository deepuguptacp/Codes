/*          EXPERIMENT NO - 19    Date : 06:11:2019 03:11PM */
%{
    #include<stdlib.h>
    void yyerror(char *);
    #include"Exp_19_1_x.tab.h"
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