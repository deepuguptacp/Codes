#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct pair1{
    int con;
    double time;
    pair1(int c, double t){
        con = c;
        time = t;
    }
};

int Corona(vector<vector <pair1> > &Interaction, map<int, int> &visit, queue<pair1> &q){
    int counter = 0;
    while(!q.empty()){
        pair1 temp = q.front();
        q.pop();
        for(int i = 0; i < Interaction[temp.con].size(); i++){
            if(visit.count(Interaction[temp.con][i].con) == 0){
                if(temp.time < Interaction[temp.con][i].time){
                    visit[Interaction[temp.con][i].con]++;
                    q.push(Interaction[temp.con][i]);
                    counter++;
                }
            }
        }
    }
    return counter;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> V(n + 1);
        for(int i = 1; i < n + 1; i++){
            cin>>V[i];
        }
        vector<vector <pair1> > Interaction(n + 1);
        for(int i = 1; i < n + 1; i++){
            for(int j = 1; j < n + 1; j++){
                if(i != j){
                    if(i > j && V[i] < V[j]){
                        Interaction[i].push_back(pair1(j, (double)(i - j) / (V[j] - V[i])));
                    }
                    else if(i < j && V[i] > V[j]){
                        Interaction[i].push_back(pair1(j, (double)(j - i) / (V[i] - V[j])));   
                    }
                }
            }
        }
        int minRes = INT_MAX, maxRes = INT_MIN;
        for(int i = 1; i < n + 1; i++){
            map<int, int> visit;
            queue<pair1> q;
            int counter = 1;
            visit[i]++;
            for(int j = 0; j < Interaction[i].size(); j++){
                visit[Interaction[i][j].con]++;
                q.push(Interaction[i][j]);
                counter++;
            }
            counter += Corona(Interaction, visit, q);
            maxRes = max(maxRes, counter);
            minRes = min(minRes, counter);
        }
        cout<<minRes<<" "<<maxRes<<endl;
    }
    return 0;
}