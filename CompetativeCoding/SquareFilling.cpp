#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    int A[n][m],B[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>A[i][j];
    }
    memset(B, 0, sizeof(B));
    vector<pair<int, int> >p;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            if(A[i][j]==1&&A[i+1][j]==1&&A[i][j+1]==1&&A[i+1][j+1]==1){
                B[i][j]=1;
                B[i+1][j]=1;
                B[i][j+1]=1;
                B[i+1][j+1]=1;
                p.push_back(make_pair(i+1,j+1));
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(A[i][j]!=B[i][j]){
            cout<<-1<<endl;
            return 0;
        }
        }
    }
    cout<<p.size()<<endl;
    for(int i=0;i<p.size();i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;
    return 0;
}