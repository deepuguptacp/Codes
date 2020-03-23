//https://practice.geeksforgeeks.org/problems/addition-of-submatrix/0
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int T;
    cin>>T;
    while(T--){
        int n, m;
        cin>>n>>m;
        int C[n][m];
        int aux[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cin>>C[i][j];
        }
        int x1, y1, x2, y2;
        cin>>x1>>x2>>y1>>y2;
        x1--;
        x2--;
        y1--;
        y2--;
        int sum=0;
        for(int i=0; i<= y1-x1; i++){
            for(int j=0; j <= y2-x2; j++)
                sum+=C[i+x1][j+x2];
        }
        cout<<sum<<endl;
    }
	return 0;
}

/*
Sum between (tli, tlj) and (rbi, rbj) is,(tl :- Top Left, rb :- Right Bottom)
   aux[rbi][rbj] - aux[tli-1][rbj] - aux[rbi][tlj-1] + aux[tli-1][tlj-1]
aux is the auxilliary matrix of the matrix C[n][m]
How to build aux[n][m]?
1. Copy first row of mat[][] to aux[][]
2. Do column wise sum of the matrix and store it.
3. Do the row wise sum of updated matrix aux[][] in step 2.
*/