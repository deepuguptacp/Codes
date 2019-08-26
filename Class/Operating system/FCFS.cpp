#include<iostream>
using namespace std;
int i=0;

int main(){
    int n;
    cout<<"Enter the number of processes : ";
    cin>>n;
    int burtTime[n], processNo[n];
    for(i=0; i<n; i++){
        cout<<"Burst Time for Process "<<i+1<<" : "<<endl;
        cin>>burtTime[i];
        processNo[i]=i+1;
    }
    
    return 0;
}