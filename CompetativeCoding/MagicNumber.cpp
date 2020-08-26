#include<bits/stdc++.h>
using namespace std;
#define res "Goodbye Watson"

int Substr(string s1, string s2){
    
}

int Substring(string s1, string s2){
    int M = s1.length();
    int N = s2.length();
    for (int i = 0; i <= N - M; i++) { 
        int j;
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return i; 
    }
    return -1;
}

string isSubstring(string s1, string s2, char c, int l){
    int k;
    int m = s1.length();
    s1.resize(l, m);
    //int n = s2.length();
    if(c == 'Y'){
        k = Substr(s1, s2);
    } else {
        k = Substring(s1, s2);
    }
    if(k >= 0)
        return to_string(k);
    else
        return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        getline(cin, s1);
        cin>>s2;
        char c;
        cin>>c;
        int l; 
        cin>>l;
        string out_ = isSubstring(s1, s2, c, l);
        cout<<out_<<endl;
    }
    return 0;
}