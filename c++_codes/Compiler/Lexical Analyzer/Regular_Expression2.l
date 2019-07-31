x [0]
y [1]
a [a]
b [b]
c [c]
d [d]
f [f]
%%
(x|y)*|{x}*{y}* printf("VALID!\n");
(a{b}*c|(def)+|{a}*{d}+e)+ printf("VALID!\n");
((a|b)*|(c|d)*)+|a{b}*{c}*d printf("VALID!\n");
.* printf("INVALID!\n");
%%
int main(){
    yylex();
    return 0;
}
int yywrap(){
    return 1;
}