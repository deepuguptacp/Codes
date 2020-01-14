#include<iostream>
using namespace std;
int minm=0, mincost=0, cost[5][5], parent[5];
int find(int i){
    while(parent[i])
        i=parent[i];
    return 0;
}
int uni(int i, int j){
    if(i!=j){
        parent[j]=i;
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the number of vertices : ";
    cin>>n;
    cout<<"Cost Matrix";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>cost[i][j];
            if(cost[i][j]==0)
                cost[i][j]=INT_MAX;
        }
    }
    int ne=0, a, b, u, v;
    while(ne<n){
        for(int i=0, minm=999; i<n; i++){
            for(int j=0; j<n; j++){
                if(cost[i][j]<minm){
                    minm=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u, v)){
            cout<<ne++<<" edge ("<<a<<","<<b<<") = "<<minm;
            mincost+=minm;
        }
        cost[a][b]=cost[b][a]=999;
        cout<<"Min cost = "<<mincost;
    }
    return 0;
}