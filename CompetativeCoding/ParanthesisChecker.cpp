//https://practice.geeksforgeeks.org/problems/parenthesis-checker/0/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int T;
	cin>>T;
	while(T--){
	    char string[100000];
	    cin>>string;
	    stack<char> s;
	    int i=0;
	    //int temp=0;
	    s.push('$');
	    while(string[i] != '\0'){
	        if(string[i]=='}' && s.top()=='{')
	            s.pop();
	        else if(string[i]==')' && s.top()=='(')
	            s.pop();
	        else if(string[i]==']' && s.top()=='[')
	            s.pop();
	        else{
	            s.push(string[i]);
	        }
	        i++;
	    }
	    if(s.top() == '$')
	        cout<<"balanced"<<endl;
	    else
	        cout<<"not balanced"<<endl;
	}
	return 0;
}