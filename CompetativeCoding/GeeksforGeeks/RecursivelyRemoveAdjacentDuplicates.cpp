//https://practice.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates/0/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        stack<char> s;
        int n=str.size();

        for(int i=1; i<n; i++){
            if(str[i] != s.top()){
                s.push(str[i]);
            }
            else if(str[i] == s.top() && str[i+1] != s.top()){
                s.pop();
            }
            else
                continue;
        }
        string output;
        int j=0;
        //cout<<str;
        while(!s.empty()){
            output[j] = s.top();
            cout<<s.top();
            s.pop();
            j++;
        }
        for(int i=j; i>=0; i--)
            cout<<output[i];
        cout<<endl;
    }
    return 0;
}