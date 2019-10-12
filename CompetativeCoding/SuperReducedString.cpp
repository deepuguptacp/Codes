//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/
//practice-problems/algorithm/super-reduced-strings-303701dd/
#include<iostream>
#include<stack>
using namespace std;
#define size 1000
int main(){
    char s[size];
    int i=0, length = 0;
    cin>>s;
    while(s[i]!='\0'){
        length++;
        i++;
    }
    stack<char> st, output;
    st.push('$');
    output.push('$');
    st.push(s[0]);
    //cout<<length<<endl<<st.top()<<endl;
    for(i=1; i<length; i++){
        if(st.top()==s[i])
            st.pop();
        else
            st.push(s[i]);
    }
    char temp;
    while(st.top()!='$'){
        temp = st.top();
        st.pop();
        output.push(temp);
    }
    if(output.top()=='$')
        cout<<"Empty String";
    else{
        while(output.top()!='$'){
            cout<<output.top();
        output.pop();
        }
    }
    cout<<endl;
    return 0;
}