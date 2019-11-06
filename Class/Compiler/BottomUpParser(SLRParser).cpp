#include<iostream>
#include<string.h>
#include<stack>
#include<limits.h>
#include<stdlib.h>
using namespace std;
char production[7][10]={"","E-E+T","E-T","T-T*F","T-F","F-(E)","F-i"};
int shift[12][6]={  {-1,-1,5,4,-1,-1},
                    {6,-1,-1,-1,-1,100},
                    {0,7,-1,-1,0,0},
                    {0,0,-1,-1,0,0},
                    {-1,-1,5,4,-1,-1},
                    {0,0,-1,-1,0,0},
                    {-1,-1,5,4,-1,-1},
                    {-1,-1,5,4,-1,-1},
                    {6,-1,-1,-1,11,-1},
                    {0,7,-1,-1,0,0},
                    {0,0,-1,-1,0,0},
                    {0,0,-1,-1,0,0}
                };
int reduce[12][1]={-1,-1,2,4,-1,6,-1,-1,-1,1,3,5};
int Goto[12][3]={{1,2,3},
                 {},
                 {},
                 {},
                 {8,2,3},
                 {},
                 {0,9,3},
                 {0,0,10},
                 {},
                 {},
                 {},
                 {}
                };
int TOP(char a){
    switch (a){
        case '+':
            return 0;
            break;
        case '*':
            return 1;
            break;
        case 'i':
            return 2;
            break;
        case '(':
            return 3;
            break;
        case ')':
            return 4;
            break;
        case '$':
            return 5;
        default :
            cout<<"Error!\n";
            exit(0);
            return -1;
    }
}
int NONindex(char c){
    switch (c)
    {
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

void SLR(char str[]){
    stack<int> s;
    stack<char> c;
    c.push('$');
    s.push(0);
    int k,n=0,z;
    while (n!=INT_MAX){
        k=s.top();
        if(shift[k][TOP(str[n])]==100){
            cout<<"Accept\n";
            return;
        }
        else if(shift[k][TOP(str[n])]>0){
            c.push(str[n]);
            s.push(shift[k][TOP(str[n])]);
            n++;
        }
        else if(shift[k][TOP(str[n])]==0){
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

int main(){
    char Str[100];
    cout<<"Enter the string to be checked : ";
    cin>>Str;
    //cout<<Str<<endl;
    stack<char> Input, Stack;
    int i=0;
    while(Str[i]!='\0'){
        i++;
    }
    Str[i]='$';
    Stack.push('$');
    Stack.push('0');
    SLR(Str);
    cout<<endl;
    return 0;
}