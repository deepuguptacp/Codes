#include<iostream>
#include<algorithm>
using namespace std;
void Wt(int [], int, int [], int [], int );
int main(){
    int n, i;
    cout<<"Enter the no of processes : ";
    cin>>n;
    int ProcessNo[n], WaitingTime[n], TurnAroundTime[n];
    int Burst[n];
    for (i=0; i<n; i++){
        cout<<"Burst Time for Process "<<i+1<<" : ";
        cin>>Burst[i];
        ProcessNo[i] = i+1;
    }
    int quantum;
    cout<<"Enter the time quantum : ";
    cin>>quantum;

    Wt(ProcessNo, n, Burst, WaitingTime, quantum);

    for(i=0; i<n; i++){
        TurnAroundTime[i] = Burst[i] + WaitingTime[i];
    }
    cout<<"Process No"<<"\t"<<"Burst Time"<<"\t"<<"Waiting time"<<"\t"<<"Turn Around Time"<<endl;
    for(i=0; i<n; i++){
        cout<<"  "<<ProcessNo[i]<<"\t\t"<<Burst[i]<<"\t\t"<<WaitingTime[i]<<"\t\t"<<TurnAroundTime[i]<<endl;
    }
    float AvgWaitingTime=0;
    float AvgTurnAroundTime=0; 
    for(i=0; i<n; i++){
        AvgWaitingTime+=WaitingTime[i];
        AvgTurnAroundTime+=TurnAroundTime[i];
    }
    cout<<"Average Waiting Time = "<<AvgWaitingTime/n<<endl;
    cout<<"Average Turn Around Time = "<<AvgTurnAroundTime/n<<endl;
    
    return 0;
}
void Wt(int ProcessNo[], int n, int Burst[], int WaitingTime[], int quantum){
    int extraTime[n], i;
    for (i = 0 ; i < n ; i++) 
        extraTime[i] =  Burst[i];
    int Temp=0;
    while(1){
        bool X = true;
        for(i=0; i<n; i++){
            if(extraTime[i] > 0){
                X = false;
                if(extraTime[i] > quantum){
                    Temp += quantum;
                    extraTime[i] -= quantum;
                }
                else{
                    Temp += extraTime[i];
                    WaitingTime[i] = Temp - Burst[i];
                    extraTime[i] = 0;
                }
            }
        }
        if(X == true)
            break;
    }
}
