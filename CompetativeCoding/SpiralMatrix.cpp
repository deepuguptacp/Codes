#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int> >& matrix){
    vector<int> answers;
    if(matrix.size() == 0) 
        return answers;
    int m = matrix.size();
    int n = matrix[0].size();
    int i, k = 0, l = 0;
    while(k < m && l < n){
        for(i = l; i < n; ++i){
            answers.push_back(matrix[k][i]);
        }
        k++; 
        for(i = k; i < m; ++i){
            answers.push_back(matrix[i][n-1]);
        }
        n--;
        if(k < m){
            for(i = n - 1; i >= l; --i){
                answers.push_back(matrix[m - 1][i]);
            }
            m--;
        }
        if(l < n){
            for(i = m - 1; i >= k; --i){
                answers.push_back(matrix[i][l]);
            }
            l++;
        }
    }
    return answers;
}

int main(){
    int m, n;
    cout<<"Enter the number of rows and columns : ";
    cin>>m>>n;
    vector<vector<int> > v;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>v[i][j];
        }
    }
    vector<int> out = spiralOrder(v);
    for(int i = 0; i < out.size(); i++){
        cout<<out[i]<<" ";
    }
    cout<<endl;
    return 0;
}