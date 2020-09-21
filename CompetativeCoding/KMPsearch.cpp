#include<bits/stdc++.h>
using namespace std;

void suffixPrefix(string text, int A[], int n){
    A[0] = 0;
    int j = 0;
    for(int i = 1; i < n; i++){
        if(text[i] == text[j]){
            j++;
            A[i] = j;    
        } else {
            if(j != 0){
                j = A[j - 1];
                i--;     //decrease i to avoid effect of increasing after iteration
            } else {
                A[i] = 0;
            }
        }
    }
}

void KMP(string text, string pattern){
    int patLen = pattern.length();
    int patArray[patLen];
    memset(patArray, 0, sizeof(patArray));
    suffixPrefix(pattern, patArray, patLen);
    int textLen = text.length();
    int loc = 0;
    int i = 0, j = 0;
    int LocArray[textLen];
    while(i < textLen){
        if(text[i] == pattern[j]){
            i++;
            j++;
        }
        if(j == patLen){
            LocArray[loc++] = i - j;
            j = patArray[j - 1];
        }
        else if(i < textLen && pattern[j] != text[i]) {
            if(j != 0)
                j = patArray[j - 1];
            else
                i++;
        }
    }
    if(loc > 0){
        cout<<"\nPattern Found at Position : ";
        for(int i = 0; i < loc; i++){
            cout<<LocArray[i]<<" ";
        }
    } else {
        cout<<"\nPattern doesn't exist in the given text.";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<"\nEnter the text : ";
        string text;
        cin>>text;
        cout<<"Enter the pattern : ";
        string pattern;
        cin>>pattern;
        KMP(text, pattern);
        cout<<endl;
    }
    return 0;
}