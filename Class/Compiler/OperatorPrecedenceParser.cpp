#include<iostream>
#include<stack>
using namespace std;
char production[10][6]={ "",
                          "E-E+E",
                          "E-E-E",
                          "E-E*E",
                          "E-i"
                        };
int symbol[5][5] = {  {1, 1, -1, -1, 1},
                      {1, 1, -1, -1, 1},
                      {1, 1, 1, -1, 1},
                      {1, 1, 1, 0, 1},
                      {-1, -1, -1, -1, 100}
                    };
int TOP(char );
int other(char );
void Operator(char []);

int main(){
    char str[100];
    cout<<"Enter the string to be checked : ";
    cin>>str;
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    str[i]='$';
    Operator(str);
    return 0;
}

int other(char c){
    switch(c){
        case '+':
            return 0;
        case '-':
            return 0;
        case '*':
            return 0;
        case '$' :
            return 1;
        default :   
            cout<<"ERROR!"<<endl;
            exit(0);
            return -1;
    }
}

int TOP(char a){
    switch (a){
        case '+':
            return 0;
            break;
        case '-':
            return 1;
            break;
        case '*':
            return 2;
            break;
        case 'i':
            return 3;
            break;
        case '$':
            return 4;
            break;
        case 'E' : 
            return 5;
            break;
        default :
            cout<<"ERROR!"<<endl;
            exit(0);
            return -1;
    }
}

void Operator(char str[]){
    stack<char> s;
    s.push('$');
    int n=0, k;
    while(1){
        k=s.top();
        int l=TOP(k);
        int m=TOP(str[n]);
        if(symbol[l][m] == 100){
            cout<<"ACCEPTED!"<<endl;
            return;
        }
        else if(symbol[l][m] == -1){
            s.push(str[n]);
            n++;
        }
        else if(symbol[l][m] == 1){
            s.pop();
            s.push('E');
        }
        else if(l==5){
            s.pop();
            int z = other(s.top());
            if(z==1){
                cout<<"ACCEPTED!"<<endl;
                return;
            }
            else if(z==0){
                s.pop();
                s.pop();
                s.push('E');
            }
        }
        else{
            cout<<"ERROR!"<<endl;
            break;   
        }
    }
}
