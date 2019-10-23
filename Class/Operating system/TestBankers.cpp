//Banker's Algorithm
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
	int M, N;
	cout<<"Enter the number of processes and Resources Respectively: ";
	cin>>N>>M;
	int P[N], Max[N][M], Allocation[N][M], Needed[N][M], Output[N], Total[M];
	int i, j;
    cout<<"Enter the total number of resources : \n";
    for(i=0; i<M; i++){
        cin>>Total[i]; 
    }
    cout<<"Enter the Max resources needed by Each processes for each Resources Respectively : \n";
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            cin>>Max[i][j];
    cout<<"Enter the Max resources Aloocated to Each process for each Resources Respectively : \n";
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            cin>>Allocation[i][j];

    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            Total[j] = Total[j] - Allocation[i][j];

    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            Needed[i][j] = Max[i][j] - Allocation[i][j];

    cout<<"\nNeed Table is :- \n"<<endl;
    cout<<"A\tB\tC\n"<<endl;
    for(i=0; i<N; i++){
    	for(j=0; j<M; j++){
    		cout<<Needed[i][j]<<"\t";
    	}
    	cout<<endl;
    }
    cout<<endl;
    int count = 0; 
    bool finish[N];
    for(i=0; i<N; i++)
        finish[i]=0;
    while (count < N){ 
        bool found = false; 
        for (int p = 0; p < N; p++){
            if (finish[p] == 0){
                int j; 
                for (j = 0; j < M; j++) 
                    if (Needed[p][j] > Total[j]) 
                        break; 
                if (j == M){
                    for (int k = 0; k < M; k++) 
                        Total[k] += Allocation[p][k]; 
                    Output[count++] = p;
                    finish[p] = 1;
                    found = true; 
                } 
            } 
        }
        if (found == false){ 
            cout << "System Has gone to the deadlock state\n"<<endl;
            return 0;
        } 
    }
    cout<<"System is in the safe state\n";
    for(i=0; i<N; i++)
    	cout<<Output[i]+1<<"\t";
    cout<<endl<<endl;
	return 0;
}