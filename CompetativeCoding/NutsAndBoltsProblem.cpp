//https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem/0/
// ! # $ % & * @ ^ ~
#include<bits/stdc++.h>
using namespace std;

void match(char nuts[], char bolts[], int n){ 
    map<char, int> hash; 
    for (int i = 0; i < n; i++)
        hash[nuts[i]] = i;
    for (int i = 0; i < n; i++)
        if (hash.find(bolts[i]) != hash.end())
            nuts[i] = bolts[i];
    sort(nuts, nuts+n);
    sort(bolts, bolts+n);
    for (int i = 0; i < n; i++)
        cout << nuts[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << bolts[i] << " ";
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        char nuts[N], bolts[N];
        for(int i=0; i<N; i++)
            cin>>nuts[i];
        for(int i=0; i<N; i++)
            cin>>bolts[i];
        match(nuts, bolts, N);
        cout<<endl;
    }
    return 0;
}
