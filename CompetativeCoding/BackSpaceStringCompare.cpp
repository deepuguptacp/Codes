#include<bits/stdc++.h>
using namespace std;

bool backspaceCompare(string S, string T) {
    //cout<<2<<endl;
    stack<char> s1, s2;
    int i=0;
    // s1.push('$');
    // s2.push('$');
    // while(S[i] == '#'){
    //     i++;
    // }
    while(S[i] != '\0'){
        if(S[i] != '#'){
            s1.push(S[i]);
        } 
        else if(S[i]=='#' && !s1.empty()) {
            s1.pop();
        }
        i++;
    }
    i=0;
    //cout<<3<<endl;
    // while(T[i] == '#'){
    //     i++;
    // }
    while(T[i]!='\0'){
        if(T[i] != '#'){
            s2.push(T[i]);
        } 
        else if(T[i]=='#' && !s2.empty()) {
            s2.pop();
        }
        i++;
    }
    //cout<<4<<endl;
    while(!s1.empty() && !s2.empty()){
        if(s1.top() == s2.top()){
            s1.pop();
            s2.pop();
        } else {
            return false;
        }
    }
    return true;
}

int main(){
    string S, T;
    cin>>S>>T;
    //cout<<1<<endl;
    cout<<backspaceCompare(S, T)<<endl;
}