#include<bits/stdc++.h>
using namespace std;
int visited[1000][1000];

bool isSafe(vector<string> v, int x, int y){
    if (v[x][y] == '#' || visited[x][y])
        return false;

    return true;
}
bool isValid(vector<string> v, int x, int y){
    int M = v.size();
    int N = v[0].size();
    if (x < M && y < N && x >= 0 && y >= 0)
        return true;

    return false;
}

void ShortestPath(vector<string> v, int i, int j, int x, int y, int& min_dist, int dist){
    if(i == x && j == y){
        min_dist = min(min_dist, dist);
        return;
    }
    visited[i][j] = 1;
    if (isValid(v, i + 1, j) && isSafe(v, i + 1, j))
        ShortestPath(v, i + 1, j, x, y, min_dist, dist + 1);
    if (isValid(v, i, j + 1) && isSafe(v, i, j + 1))
        ShortestPath(v, i, j + 1, x, y, min_dist, dist + 1);
    if (isValid(v, i - 1, j) && isSafe(v, i - 1, j))
        ShortestPath(v, i - 1, j, x, y, min_dist, dist + 1);
    if (isValid(v, i, j - 1) && isSafe(v, i, j - 1))
        ShortestPath(v, i, j - 1, x, y, min_dist, dist + 1);
    visited[i][j] = 0;
}

int main(){
    memset(visited, 0, sizeof(visited));
    int n, m;
    cin>>n>>m;
    vector<string> v;
    for(int  i = 0; i < n; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    int x1 = 0, x2, y1 = 0, y2;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            if(v[i][j] == 'S'){
                x1 = i;
                x2 = j;
            }
            if(v[i][j] == 'T'){
                y1 = i;
                y2 = j;
            }
        }
    }
    int min_dist = INT_MAX;
    ShortestPath(v, x1, x2, y1, y2, min_dist, 0);

    if(min_dist != INT_MAX){
        cout <<min_dist<<endl;
    } else {
        cout << "DOOMED"<<endl;
    }
    return 0;
}