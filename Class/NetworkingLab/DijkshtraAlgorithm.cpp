#include<iostream>
#include<stack>
#include<vector>
using namespace std;
//int distance[8][8];
#define max 8
//#define INFINITY 9999
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

int minDistance(int dist[], bool sptSet[]){
	int min = INT_MAX, min_index;
	for (int v = 0; v < max; v++)
		if (sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;
	return min_index; 
} 

void dijkastra(int G[max][max], int src, int dest){
    int dist[max];
	bool sptSet[max]; // sptSet[i] will be true if vertex i is included in shortest 
	for (int i = 0; i < max; i++) 
		dist[i] = INT_MAX, sptSet[i] = false;
	dist[src] = 0;  // Distance of source vertex from itself is always 0
	for (int count = 0; count < max - 1; count++){
		int u = minDistance(dist, sptSet);
		sptSet[u] = true;
		for (int v = 0; v < max; v++)
			if (!sptSet[v] && G[u][v] && dist[u] != INT_MAX && dist[u] + G[u][v] < dist[v]) 
				dist[v] = dist[u] + G[u][v]; 
	} 
    cout<<endl;
    cout<<"The minimum distance between Source and Destination is : "<<dist[dest]<<" units"<<endl;
}

int main(){
    int distance[max][max];
    cout<<"Enter the distance between the nodes serially : "<<endl;
    for(int i=0; i<max; i++){
        for(int j=0; j<max; j++)
            cin>>distance[i][j];
    }
    char start, end;
    cout<<"Enter the starting and End nodes : ";
    cin>>start>>end;
    int begin = priority(start);
    int last = priority(end);
    dijkastra(distance, begin, last);
    return 0;
}
/*
0 1 4 0 0 0 0 0
1 0 2 9 0 0 4 2
4 2 0 1 3 0 0 0 
0 9 1 0 1 3 1 0
0 0 3 1 0 1 0 0
0 0 0 3 1 0 6 0
0 9 0 1 0 6 0 14
0 2 0 0 0 0 14 0
*/