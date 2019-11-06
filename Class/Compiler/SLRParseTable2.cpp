#include<iostream>
#include<string.h>
#include<stack>
#include<limits.h>
#include<stdlib.h>
using namespace std;
char production[10][10]={"",
                         "E-E+T",
                         "E-E-T",
                         "E-T",
                         "T-T*F",
                         "T-T/F",
                         "T-F",
                         "F-(E)",
                         "F-i"
                        };
int shift[16][8]={  {-1,-1,-1,-1,4,-1,5,-1},
                    {6,7,-1,-1,-1,-1,-1,100},
                    {0,0,8,9,-1,0,-1,0},
                    {0,0,0,0,-1,0,-1,0},
                    {-1,-1,-1,-1,4,-1,5,-1},
                    {0,0,0,0,-1,0,-1,0},
                    {-1,-1,-1,-1,4,-1,5,-1},
                    {-1,-1,-1,-1,4,-1,5,-1},
                    {-1,-1,-1,-1,4,-1,5,-1},
                    {-1,-1,-1,-1,4,-1,5,-1},
                    {6,7,-1,-1,-1,15,-1,-1},
                    {0,0,8,9,-1,0,-1,0},
                    {0,0,8,9,-1,0,-1,0},
                    {0,0,0,0,-1,0,-1,0},
                    {0,0,0,0,-1,0,-1,0},
                    {0,0,0,0,-1,0,-1,0}};
int reduce[16][1]={-1,-1,3,6,-1,8,-1,-1,-1,-1,-1,1,2,4,5,7};
int Goto[16][3]={{1,2,3},
                 {},
                 {},
                 {},
                 {10,2,3},
                 {},
                 {0,11,3},
                 {0,12,3},
                 {0,0,13},
                 {0,0,14},
                 {},
                 {},
                 {},
                 {},
                 {},
                 {}
                };

int indexnum(char c){
    switch (c){
        case '+':
            return 0;
            break;
        case '-':
            return 1;
            break;
        case '*':
            return 2;
            break;
        case '/':
            return 3;
            break;
        case '(':
            return 4;
            break;
        case ')':
            return 5;
        case 'i':
            return 6;
        case '$':
            return 7;
        default :
            cout<<"Error!\n";
            exit(0);
            return -1;
    }
}
int NONindex(char c){
    switch (c){
    case 'E':
        return 0;
        break;
    case 'T':
        return 1;
    case 'F':
        return 2;
    default:
        return -1;
    }
}
void SLR(char[]);
int main(){
    //showTable();
    char str[]="";
    cout<<"Input the string to be checked : ";
    cin>>str;
    //cout<<"String is: "<<str<<endl;
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    str[i]='$';
    SLR(str);
    return 0;
}
void SLR(char str[]){
    stack<int> s;
    stack<char> c;
    c.push('$');
    s.push(0);
    int k,n=0,z;
    while (n!=INT_MAX){
        k=s.top();
        if(shift[k][indexnum(str[n])]==100){
            cout<<"Accept\n";
            return;
        }
        else if(shift[k][indexnum(str[n])]>0){
            c.push(str[n]);
            s.push(shift[k][indexnum(str[n])]);
            n++;
        }
        else if(shift[k][indexnum(str[n])]==0){
            int p=strlen(production[reduce[s.top()][0]]);
            z=reduce[s.top()][0];
            for(int q=0;q<p-2;q++){
                s.pop();
                c.pop();
            }
            c.push(production[z][0]);
            s.push(Goto[s.top()][NONindex(c.top())]);
        }
        else{
            cout<<"Error\n";
            break;
        }
    }
}