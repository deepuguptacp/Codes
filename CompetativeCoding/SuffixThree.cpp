//https://codeforces.com/problemset/problem/1281/A
#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string input;
        cin>>input;
        reverse(input.begin(), input.end());
        if(input[0] == 'o')
            cout<<"FILIPINO"<<endl;
        else if(input[0] == 'u')
            cout<<"JAPANESE"<<endl;
        else if(input[0] == 'a')
            cout<<"KOREAN"<<endl;
    }

    return 0;
}
