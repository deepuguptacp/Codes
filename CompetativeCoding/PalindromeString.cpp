#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string A) {
    int n = A.length();
    int i = 0;
    while(i < n){
        if(tolower(A[i]) == tolower(A[n])){
            i++;
            n--;
        }
        else if(!(isalnum(A[i]))){
            i++;
        }
        else if(!(isalnum(A[n]))){
            n--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    string s;
    cin>>s;
    if(isPalindrome(s) == 1){
        cout<<"True"<<endl;
    } else {
        cout<<"False\n";
    }
    return 0;
}