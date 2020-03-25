//https://practice.geeksforgeeks.org/problems/edit-distance/0/
#include<bits/stdc++.h>
using namespace std;

int EditDis(string str1, string str2, int len1, int len2){
    int DP[2][len1 + 1];
    for (int i = 0; i <= len1; i++) 
        DP[0][i] = i;
    for (int i = 1; i <= len2; i++){
        for (int j = 0; j <= len1; j++){
            if (j == 0) 
                DP[i % 2][j] = i;
            else if (str1[j - 1] == str2[i - 1])
                DP[i % 2][j] = DP[(i - 1) % 2][j - 1];
            else
                DP[i % 2][j] = 1 + min(DP[(i - 1) % 2][j], min(DP[i % 2][j - 1], DP[(i - 1) % 2][j - 1]));
        }
    }
    return DP[len2 % 2][len1];
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int P, Q;
        cin>>P>>Q;
        string str1, str2;
        cin>>str1>>str2;
        cout<<EditDis(str1, str2, P, Q)<<endl;
    }
    return 0;
}