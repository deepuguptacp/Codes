#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main(){
    int n, i;
    cout<<"Enter the number of processes : ";
    cin>>n;
    vector<pair<int, int> > P(n);
    int ProcessNo[n], WaitingTime[n], turnAroundTime[n];
    for(i=0; i<n; i++){
        cout<<"Enter the Arrival Time and Burst Time for process "<<i+1<<" respectively : ";
        cin>>P[i].first>>P[i].second;
        ProcessNo[i]=i+1;
    }
    

    return 0;
}