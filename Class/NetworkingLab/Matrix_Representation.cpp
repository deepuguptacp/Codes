#include<iostream>
using namespace std;

int main(){
    int v;
    cout<<"Enter number of vertices in the network : ";
    cin>>v;
    int mat[v][v];
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++)
            mat[i][j]=0;
    }
    int e;
    cout<<"Enter the number of edges : ";
    cin>>e;
    cout<<"Enter the pair of nodes having edges : ";
    int x,y;
    for(int i=0;i<e;i++){
        cin>>x>>y;
        mat[x][y]=1;
    }
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int q;
    cout<<"Enter the number of query : ";
    cin>>q;
    for(int i=0;i<q;i++){
        cout<<"Enter the node pairs to check for edges : ";
        cin>>x>>y;

        if(mat[x][y]==1){
            cout<<"Yes, edge exist "<<endl;
        }
        else{
            cout<<"Edge doesn't exist "<<endl;
        }
    }
    return 0;
}