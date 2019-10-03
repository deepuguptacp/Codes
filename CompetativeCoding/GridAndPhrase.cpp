//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/jadvaliioo-62280ff6/
#include<iostream>
using namespace std;
int main(){
    int n, m, temp=0;
    int i=0, j=0;
    cin>>n>>m;
    char A[n][m];
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin>>A[i][j];
    for(i=0; i+3<n; i++){
        for(j=0; j<m; j++){
            if(A[i][j]=='s' && A[i+1][j]=='a' && A[i+2][j]=='b' && A[i+3][j]=='a')
                temp++;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j+3<m; j++){
            if(A[i][j]=='s' && A[i][j+1]=='a' && A[i][j+2]=='b' && A[i][j+3]=='a')
                temp++;
        }
    }
    for(i=0; i+3<n; i++){
        for(j=0; j+3<m; j++){
            if(A[i][j]=='s' && A[i+1][j+1]=='a' && A[i+2][j+2]=='b' && A[i+3][j+3]=='a')
                temp++;
        }
    }
    for(i=0; i-3<n; i++){
        for(j=0; j+3<m; j++){
            if(A[i][j]=='s' && A[i-1][j+1]=='a' && A[i-2][j+2]=='b' && A[i-3][j+3]=='a')
                temp++;
        }
    }

    cout<<temp<<endl;
    return 0;
}