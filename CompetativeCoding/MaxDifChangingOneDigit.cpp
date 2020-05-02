//https://leetcode.com/contest/biweekly-contest-25/problems/max-difference-you-can-get-from-changing-an-integer/
#include<bits/stdc++.h>
using namespace std;

int MaxNum(int num){
    int x;
    string n = to_string(num);
    if(n[0] == '9'){
        int j = 1;
        while(n[j] == '9' && j<= n.length()){
            j++;
        }
        x = n[j];
        for(int i=j; i<n.length(); i++){
            if(n[i] == x)
                n[i] = '9';
        }
    } else if(n[0] != '9') {
        x = n[0];
        for(int i=0; i<n.length(); i++){
            if(n[i] == x)
                n[i] = '9';
        }
    }
    return stoi(n);
}
int MinNum(int num){
    int x;
    string n = to_string(num);
    if(n[0] != '1'){
        x = n[0];
        for(int i=0; i<n.length(); i++){
            if(n[i] == x)
                n[i] = '1';
        }
    } else if(n[0] == '1') {
        x = n[1];
        for(int i=1; i<n.length(); i++){
            if(n[i] == x)
                n[i] = '0';
        }
    }
    return stoi(n);
}
int main() {
    int num;
    cin>>num;
    int a = MaxNum(num);
    int b = MinNum(num);
    cout<<a<<" "<<b<<endl;
    cout<<a-b<<endl;
    return 0;
}