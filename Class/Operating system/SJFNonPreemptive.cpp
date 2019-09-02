#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main(){
    int n, i;
    cout<<"Enter the number of processes : ";
    cin>>n;
    vector< int> Burst(n);
    int ProcessNo[n], WaitingTime[n], turnAroundTime[n];
    for(i=0; i<n; i++){
        cout<<"Burst Time for Process "<<i+1<<" : ";
        cin>>Burst[i];
        ProcessNo[i]=i+1;
    }
    sort(Burst.begin(), Burst.end());
    WaitingTime[0]=0;
    for(i=1; i<n; i++){
        WaitingTime[i] = Burst[i-1] + WaitingTime[i-1];
    }
    for(i=0; i<n; i++){
        turnAroundTime[i] = Burst[i] + WaitingTime[i];
    }
    cout<<"ProcessNo\tBurstTime\tWaitingTime\tTurnAroundTime\n";
    for(i=0; i<n; i++){
        cout<<"  "<<ProcessNo[i]<<"\t\t  "<<Burst[i]<<"\t\t  "<<WaitingTime[i]<<"\t\t  "<<turnAroundTime[i]<<endl;
    }
    float avgWaitingTime=0, avgTurnAroundTime=0;
    for(i=0; i<n; i++){
        avgWaitingTime+=WaitingTime[i];
        avgTurnAroundTime+=turnAroundTime[i];
    }
    avgWaitingTime=(float)avgWaitingTime/n;
    avgTurnAroundTime=(float)avgTurnAroundTime/n;
    cout<<"Average Waiting time = "<<avgWaitingTime<<endl;
    cout<<"Average Turn Around Time = "<<avgTurnAroundTime<<endl;
    return 0;
}