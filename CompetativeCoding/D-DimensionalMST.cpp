#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define edge pair<int, int>

class Graph {
    private:
        vector<pair<int, edge> > G;  // graph
        vector<pair<int, edge> > T;  // mst
        int *root;
        int V;  // number of vertices/nodes in graph
    public:
        Graph(int V);
        void AddEdge(int u, int v, int w);
        int find_set(int i);
        void union_set(int u, int v);
        void kruskal();
        void print();
};
Graph::Graph(int V) {
    root = new int[V];

  //i 0 1 2 3 4 5
  //root[i] 0 1 2 3 4 5
    for (int i = 0; i < V; i++)
        root[i] = i;

    G.clear();
    T.clear();
}
void Graph::AddEdge(int u, int v, int w){
    G.push_back(make_pair(w, edge(u, v)));
}
int Graph::find_set(int i) {
  // If i is the root of itself
    if (i == root[i])
        return i;
    else
    // Else if i is not the root of itself
    // Then i is not the representative of his set,
    // so we recursively call Find on its root
        return find_set(root[i]);
}

void Graph::union_set(int u, int v) {
    root[u] = root[v];
}
void Graph::kruskal() {
    int i, uRep, vRep;
    sort(G.begin(), G.end());  // increasing weight
    for (i = 0; i < G.size(); i++) {
        uRep = find_set(G[i].second.first);
        vRep = find_set(G[i].second.second);
        if (uRep != vRep) {
            T.push_back(G[i]);  // add to tree
            union_set(uRep, vRep);
        }
    }
}
void Graph::print() {
    int res = 0;
    for (int i = 0; i < T.size(); i++) {
        res+=T[i].first;
    }
    cout<< -1 * res<<endl;
}


int main() {
    int N, D;
    cin>>N>>D;
    vector<int> v;
    int V = N, E = N * (N - 1) / 2;
    Graph g(N);
    for(int i = 0; i < N; i++){
        int temp = 0;
        for(int j = 0; j < D; j++){
            int k;
            cin>>k;
            temp += k;
        }
        v.push_back(temp);
    }
    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            g.AddEdge(i, j, -1 * abs(v[i] - v[j]));
        }
    }
    g.kruskal();
    g.print();
	return 0;
}