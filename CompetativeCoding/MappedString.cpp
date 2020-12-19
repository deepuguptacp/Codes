#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

string s = "#ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void generate(int n, char output[], int i, int j){
    // base case
    if(n/i == 0){
        return;
    }
    // recursive case
    int a, b;
    a = n % i;
    b = n / i ;
    if(a > 26 || b > 26){
        generate(n, output, i * 10, j);
    } else {
        output[j]=s[b];
        output[j+1]=s[a];
        output[j+2]='\0';
        cout<<output<<endl;
        generate(n, output, i * 10, 0);
    }

}

int  main(){
    int  n;
    cin>>n;
    char output[50];
    int copy = n;
    int index = 0;
    while(copy){
        output[index] = s[copy%10];
        index++;
        copy = copy /10;
    }
    for(int i = index - 1; i >= 0; i--){
        cout<<output[i];
        output[i]='\0';
    }
    cout<<endl;
    generate(n, output, 1, 0);
    return 0;
}