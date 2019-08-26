#include<iostream>

using namespace std;
int i=0;

int waiting_time(int V[], int n){
    int wt=0;
    for(i=0; i<n-1; i++){
        wt=wt+V[i];
    }
    return wt;
}

int main(){
    int n;
    cout<<"Enter the number of Processes : ";
    cin>>n;
    int burst_time[n], process_no[n];
    for(i=0; i<n; i++){
        process_no[i]=i+1;
        cout<<"Enter the burst time for "<<i+1<<"th process : ";
        cin>>burst_time[i];
    }
    int wt = waiting_time(burst_time, n);
    cout<<"Waiting time : "<<wt<<endl;
}