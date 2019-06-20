#include<iostream>
#include<string>
using namespace std;

string summation(string a, string b){
    string str = "";
    int i, carry=0, x, y, sum, data;
    i=a.length()-1;
    int j=b.length()-1;
    while(i>=0 && j>=0){
        x=a[i--]-'0';
        y=b[j--]-'0';
        sum=x+y+carry;
        data=sum%10;
        carry=sum/10;
        str.push_back(data+'0');
    }
    while(i>=0 && j<0){
        x=a[i--]-'0';
        sum=x+carry;
        data=sum%10;
        carry=sum/10;
        str.push_back(data+'0');
    }
    while(j>=0 && i<0){
        y=b[j--]-'0';
        sum=y+carry;
        data=sum%10;
        carry=sum/10;
        str.push_back(data+'0');
    }
    if(carry!=0){
        str.push_back(carry+'0');
    }
    reverse(str.begin(), str.end()); 
    return str;
}

string product(string a, int n){
    string str = "";
    int carry;
    int i=a.length()-1;
    while(i>=0 ){
        int x=a[i--]-'0';
        int mul = x * n;
        int data=mul%10;
        carry=mul/10;
        str.push_back(data+'0');
    }
    
    if(carry!=0){
        str.push_back(carry+'0');
    }
    reverse(str.begin(), str.end()); 

    return str;
}

int main(){
    /* string *arr = new string[100];
    for(int i=0; i<2; i++) {
        cin>>arr[i];
    }*/
    string str1, str2;

    cin>>str1>>str2;
    cout<<summation(str1, str2)<<"\n"<<endl;
    cout<<product(str1, 7)<<"\n"<<endl;

    return 0;
}