#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int A[9];
    memset(A, 0, sizeof(A));
    for(int i = 0; i < s.length(); i++){
        int k = s[i] - '0';
        if(k >= 1 && k <= 9){
            A[k - 1] = 1;
        }
    }
    int flag = 1;
    for(int i = 0; i < 9; i++){
        if(A[i] == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 0){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
    return 0;
}