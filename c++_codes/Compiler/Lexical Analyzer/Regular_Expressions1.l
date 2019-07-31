a [0]
b [1]
%%
(a|b)*|{a}*{b}* printf("VALID!\n");
.* printf("INVALID!\n");
%%
int main(){
    yylex();
    return 0;
}
int yywrap(){
    return 1;
}