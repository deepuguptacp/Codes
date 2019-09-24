#include<iostream>
#include<queue>
using namespace std;
queue<int> ReadyQueue;
void wt(int [], int, int [], int [], int , int []);
int main(){
    int n, quantum, i;
    cout<<"Enter the number of processes : ";
    cin>>n;
    int arrivalTime[n], WaitingTime[n], ProcessNo[n], TurnAroundTime[n];
    cout<<"Enter the arrival time of the processes : ";
    for(i=0; i<n; i++)
        cin>>arrivalTime[i];
    cout<<"Enter the time quantum : ";
    cin>>quantum;
    int Burst[n];
    for (i=0; i<n; i++){
        cout<<"Burst Time for Process "<<i+1<<" : ";
        cin>>Burst[i];
        ProcessNo[i] = i+1;
    }
    wt(ProcessNo, n, Burst, WaitingTime, quantum, arrivalTime);
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
void wt(int ProcessNo[], int n, int Burst[], int WaitingTime[], int quantum, int arrivalTime[]){
    int extraTime[n], i, Time = 0, TotalTime=0, t=0;
    for(i=0; i<n; i++){
        extraTime[i] = Burst[i];
        //TotalTime += Burst[i];
    }
    int Temp = 0;
    while(1){
        for(int j=0; j<n; j++){
            if(arrivalTime[j]<= Time && arrivalTime[j] > Time-quantum)
                ReadyQueue.push(j);
            //cout<<"yes\n";
            t++;
        }
        int k=ReadyQueue.size();
        if(k<t){
            for(i=0; i<k; i++){
                if(extraTime[ReadyQueue.front()] > quantum){
                    Temp += quantum;
                    extraTime[ReadyQueue.front()] -= quantum;
                    int h = ReadyQueue.front();
                    ReadyQueue.pop();
                    ReadyQueue.push(h);
                    Time +=quantum;
                }
                else{
                    Temp += extraTime[ReadyQueue.front()];
                    WaitingTime[ReadyQueue.front()] = Temp - Burst[i];
                    extraTime[ReadyQueue.front()] = 0;
                    Time += extraTime[ReadyQueue.front()];
                    ReadyQueue.pop();
                }
            }
        }
        else{
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
}
