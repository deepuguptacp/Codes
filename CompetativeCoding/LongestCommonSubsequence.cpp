//https://practice.geeksforgeeks.org/problems/longest-common-subsequence/0/
#include<bits/stdc++.h>
using namespace std;

int LCS(string X, string Y, int m, int n){
    // Naive solution recurssion
    /*if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return 1 + LCS(X, Y, m - 1, n - 1);
    else
        return max(LCS(X, Y, m, n - 1), LCS(X, Y, m - 1, n));*/
    int L[m + 1][n + 1];  
    int i, j;
    for (i = 0; i <= m; i++)  {  
        for (j = 0; j <= n; j++)  {  
        if (i == 0 || j == 0)  
            L[i][j] = 0;
        else if (X[i - 1] == Y[j - 1])  
            L[i][j] = L[i - 1][j - 1] + 1;
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }
    }
    return L[m][n];
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int A, B;
        cin>>A>>B;
        string str1, str2;
        cin>>str1>>str2;
        //cout<<str1<<str2<<endl;
        cout<<LCS(str1, str2, A, B)<<endl;
    }
    return 0;
}