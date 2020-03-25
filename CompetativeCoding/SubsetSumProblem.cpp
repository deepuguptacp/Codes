//https://practice.geeksforgeeks.org/problems/subset-sum-problem/0/
#include<bits/stdc++.h>
using namespace std;

bool findPart(int A[], int n){
    int sum = 0;
    int i, j;
    for(i = 0; i < n; i++)
        sum+=A[i];
    if (sum % 2 != 0)
        return false;
    bool part[sum / 2 + 1][n + 1];
    for (i = 0; i <= n; i++)
        part[0][i] = true;

    for (i = 1; i <= sum / 2; i++)
        part[i][0] = false;

    for (i = 1; i <= sum / 2; i++){  
        for (j = 1; j <= n; j++){
            part[i][j] = part[i][j - 1];  
            if (i >= A[j - 1])  
                part[i][j] = part[i][j] || part[i - A[j - 1]][j - 1];  
        }
    }
    return part[sum / 2][n];
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N];
        for(int i=0; i<N; i++)
            cin>>A[i];
        sort(A, A+N);
        if(findPart(A, N) == true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}