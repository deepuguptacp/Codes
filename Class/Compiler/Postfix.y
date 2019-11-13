/*                EXPERIMENT NO - 19       Date : 06:11:2019 03:11PM
Conversion of given INFIX Expresssion to POSTFIX Expression
For execution write in terminal :
yacc -d Postfix.y
lex Postfix.l
gcc lex.yy.c Postfix.tab.c
a.exe
*/
%{
    #include<stdio.h>
    int yylex(void);
    void yyerror(char *);
%}
%token INTEGER
%%
P: P E '\n' {
    printf("\n");
}
|
;
E: E '+' T {printf("+"); }
| E '-' T { printf("-"); }
| T { $$=$1; }
T: T '*' F {   printf("*"); }
| T '/' F { printf("/");}
| T '%' F { printf("\%"); }
| F {   $$=$1;}
;
F: '(' E ')' {   $$=$2; }
| INTEGER {   $$=$1; printf("%d",$1);}
;
%%
void yyerror(char *s){
    fprintf(stderr,"%s\n",s);
}
int main(void){
    yyparse();
    return 0;
}