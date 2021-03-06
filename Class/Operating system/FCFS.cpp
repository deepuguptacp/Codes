#include<iostream>
using namespace std;
int i=0;

int main(){
    int n;
    cout<<"Enter the number of processes : ";
    cin>>n;
    int burstTime[n], processNo[n], turnAroundTime[n], waitingTime[n];
    for(i=0; i<n; i++){
        cout<<"Burst Time for Process "<<i+1<<" : ";
        cin>>burstTime[i];
        processNo[i]=i+1;
    }
    waitingTime[0]=0;
    for(i=1; i<n; i++){
        waitingTime[i] = burstTime[i-1] + waitingTime[i-1];
    }
    for(i=0; i<n; i++){
        turnAroundTime[i] = burstTime[i] + waitingTime[i];
    }
    cout<<"ProcessNo\tBurstTime\tWaitingTime\tTurnAroundTime\n";
    for(i=0; i<n; i++){
        cout<<"  "<<processNo[i]<<"\t\t  "<<burstTime[i]<<"\t\t  "<<waitingTime[i]<<"\t\t  "<<turnAroundTime[i]<<endl;
    }
    float avgWaitingTime=0, avgTurnAroundTime=0;
    for(i=0; i<n; i++){
        avgWaitingTime+=waitingTime[i];
        avgTurnAroundTime+=turnAroundTime[i];
    }
    avgWaitingTime=(float)avgWaitingTime/n;
    avgTurnAroundTime=(float)avgTurnAroundTime/n;
    cout<<"Average Waiting time = "<<avgWaitingTime<<endl;
    cout<<"Average Turn Around Time = "<<avgTurnAroundTime<<endl;
    return 0;
}