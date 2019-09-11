#include<iostream>
using namespace std;

int main(){
    int N, M, i, j;
    cout<<"Enter the number of processes and Resources respectively : ";
    cin>>N>>M;
    int P[N], Max[N][M], Alloc[N][M], Need[N][M], Result[N], Total[M];
    cout<<"Enter the total number of resources : \n";
    for(i=0; i<M; i++){
        cin>>Total[i]; 
    }
    cout<<"Enter the Max resources needed by Each processes for each Resources Respectively : \n";
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            cin>>Max[i][j];
    cout<<"Enter the Max resources Aloocated Each processes for each Resources Respectively : \n";
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            cin>>Alloc[i][j];
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            Need[i][j] = Max[i][j] - Alloc[i][j];
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            Total[j] = Total[j] - Alloc[i][j];
    cout<<"Needed Process : \n";
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            cout<<Need[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\nAvailable Resources: ";
    for(i=0; i<M; i++)
        cout<<Total[i]<<"\t";
    cout<<endl;
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
                    if (Need[p][j] > Total[j]) 
                        break; 
                if (j == M){
                    for (int k = 0; k < M; k++) 
                        Total[k] += Alloc[p][k]; 
                    Result[count++] = p;
                    finish[p] = 1;
                    found = true; 
                } 
            } 
        }
        if (found == false){ 
            cout << "System is not in safe state\nSystem Has gone to the deadlock state\n";
            return 0;
        } 
    }
    cout << "System is in safe state.\nSafe sequence is : "; 
    for (int i = 0; i < N; i++) 
        cout << Result[i]+1 << " ";
    cout<<endl;
    return 0;
}
