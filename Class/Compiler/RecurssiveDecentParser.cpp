#include<iostream>
#include<string.h>

using namespace std;
int E(int, char *);
int A(int, char *);

int main(){
    char str[100]="";
    
    cout<<"Given Production : \nE=iA\nA=+iA\nA=e\n";
    cout<<"Give the input string to be checked : ";
    cin>>str;
    int flag=E(0, str);
    if(flag==1)
        cout<<"\nAccepted!\n";
    else{  
        cout<<"\nINVALID!\n";
    }
    return 0;
}

int E(int index, char *str){
    if(str[index]=='\0')
        return false;
    else if(str[index] == 'i'){
        return A(++index, str);
    }
    else 
        return false;
}

int A(int index, char *str){
    if(str[index] == '\0')
        return true;
    else if(str[index] == '+'){
        if(str[++index] == 'i')
            return A(++index, str);
        else    
            return false;
    }
    else
        return false;
}