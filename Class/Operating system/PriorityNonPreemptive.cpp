#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main(){
    int n, i;
    cout<<"Enter the number of processes : ";
    cin>>n;
    vector<pair<int, int> > PriorityBurst(n);
    int ProcessNo[n], WaitingTime[n], turnAroundTime[n];
    for(i=0; i<n; i++){
        cout<<"Enter the pririty and burst time for process "<<i+1<<" respectively : ";
        cin>>PriorityBurst[i].first>>PriorityBurst[i].second;
        ProcessNo[i]=i+1;
    }
    sort(PriorityBurst.begin(), PriorityBurst.end());
    WaitingTime[0]=0;
    for(i=1; i<n; i++){
        WaitingTime[i] = PriorityBurst[i-1].second + WaitingTime[i-1];
    }
    for(i=0; i<n; i++){
        turnAroundTime[i] = PriorityBurst[i].second + WaitingTime[i];
    }
    cout<<"Process No"<<"\t"<<"Priority"<<"\t"<<"Burst Time"<<"\t"<<"Waiting time"<<"\t"<<"Turn Around Time"<<endl;
    for(i=0; i<n; i++){
        cout<<"  "<<ProcessNo[i]<<"\t\t"<<PriorityBurst[i].first<<"\t\t"<<PriorityBurst[i].second<<"\t\t"<<WaitingTime[i]<<"\t\t"<<turnAroundTime[i]<<endl;
    }
    sort(PriorityBurst.begin(), PriorityBurst.end());
    float AvgWaitingTime=0;
    float AvgTurnAroundTime=0; 
    for(i=0; i<n; i++){
        AvgWaitingTime+=WaitingTime[i];
        AvgTurnAroundTime+=turnAroundTime[i];
    }
    cout<<"Average Waiting Time = "<<AvgWaitingTime/n<<endl;
    cout<<"Average Turn Around Time = "<<AvgTurnAroundTime/n<<endl;
    

    return 0;
}