#include<bits/stdc++.h>
using namespace std;

void CountSort(char arr[]){
    /*int table[26];  //26 alphabet characters
    memset(table, 0, sizeof(table));
    for(int i=0; arr[i]!='\0'; i++)
        table[arr[i]-97]++;
    char p = 'a';
    for(int i=0; i<26; i++){
        for(int j=0; j<table[i]; j++){
            cout<<p;
        }
        ++p;
    }
    cout<<endl;*/
    //Another way
    int index[26]={0};
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        index[arr[i]-97]++;
        count++;
    }
    for(int i=1;i<=25;i++){
        index[i]+=index[i-1];
    }
    char result[count+1];
    for(int i=0;arr[i]!='\0';i++){
        int k=index[arr[i]-'a'];
        result[k-1]=arr[i];
        index[arr[i]-'a']--;
    }
    for(int i=0;arr[i];i++){
        arr[i]=result[i];
    }
}

int main(){
    long int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        char A[n+1];
        cin>>A;
        CountSort(A);
        cout<<A;
    }
    return 0;
}