#include<bits/stdc++.h>
using namespace std;
string simplifyPath(string A){
    int n = A.length();
    stack<string> s;
    string dir, res;
    res.append("/");
    for(int i = 0; i < n; i++){
        dir.clear();
        while(A[i] == '/'){
            i++;
        }
        while(i < n && A[i] != '/'){
            dir.push_back(A[i]);
            i++;
        }
        if(dir.compare("..") == 0){
            if(!s.empty()){
                s.pop();
            }
        }
        else if(dir.compare(".") == 0){
            continue;
        }
        else if(dir.length() != 0){
            s.push(dir);
        }
    }
    stack<string> st;
    while(!s.empty()){
        st.push(s.top());
        s.pop();
    }
    while (!st.empty()){
        string temp = st.top();
        if (st.size() != 1){
            res.append(temp + "/");
        } else {
            res.append(temp);
        }
        st.pop();
    }
    return res;
}

int main(){
    string s;
    cin>>s;
    cout<<"\nPresent Working Directory : "<<simplifyPath(s)<<endl;
    return 0;
}