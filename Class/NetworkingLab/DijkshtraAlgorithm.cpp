#include<iostream>
#include<stack>
#include<vector>
using namespace std;
//int distance[8][8];
#define max 2
#define INFINITY 9999
int priority(char ch){
    if( ch == 'A'|| ch == 'a' )
        return 0;
    else if( ch == 'B' || ch == 'b')
        return 1;
    else if( ch == 'C' || ch == 'c')
        return 2;
    else if( ch == 'D' || ch == 'd')
        return 3;
    else if( ch == 'E' || ch == 'e')
        return 4;
    else if( ch == 'F' || ch == 'f')
        return 5;
    else if( ch == 'G' || ch == 'g')
        return 6;
    else if( ch == 'H' || ch == 'h')
        return 7;
}
//void dijkstra(int G[max][max],int n,int startnode);
/*void dijkastra(G[max][max], int src, int dest){
    int dist;
    
}*/
int main(){
    /*int n;
    cout<<"Enter the number of nodes : ";
    cin>>n;*/
    int distance[max][max];
    cout<<"Enter the distance between the nodes serially : "<<endl;
    for(int i=0; i<max; i++){
        for(int j=0; j<max; j++)
            cin>>distance[i][j];
    }
    char start, end;
    cout<<"Enter the starting and End nodes : ";
    cin>>start>>end;
    cout<<start<<"\t"<<end<<endl; 
    int begin = priority(start);
    int last = priority(end);
    cout<<begin<<"\t"<<last<<endl;
    //dijkstra(distance, begin, last);
    return 0;
}

/*void dijkstra(int G[max][max], int n, int startnode){
    int cost[max][max],distance[max],pred[max];
   int visited[max],count,mindistance,nextnode,i,j;
   for(i=0;i<n;i++)
      for(j=0;j<n;j++)
   if(G[i][j]==0)
      cost[i][j]=INFINITY;
   else
      cost[i][j]=G[i][j];
   for(i=0;i<n;i++) {
      distance[i]=cost[startnode][i];
      pred[i]=startnode;
      visited[i]=0;
   }
   distance[startnode]=0;
   visited[startnode]=1;
   count=1;
   while(count<n-1) {
      mindistance=INFINITY;
      for(i=0;i<n;i++)
         if(distance[i]<mindistance&&!visited[i]) {
         mindistance=distance[i];
         nextnode=i;
      }
      visited[nextnode]=1;
      for(i=0;i<n;i++)
         if(!visited[i])
      if(mindistance+cost[nextnode][i]<distance[i]) {
         distance[i]=mindistance+cost[nextnode][i];
         pred[i]=nextnode;
      }
      count++;
   }
   for(i=0;i<n;i++)
   if(i!=startnode) {
      cout<<"\nDistance of node"<<i<<"="<<distance[i];
      cout<<"\nPath="<<i;
      j=i;
      do {
         j=pred[j];
         cout<<"<-"<<j;
      }while(j!=startnode);
   }
}*/