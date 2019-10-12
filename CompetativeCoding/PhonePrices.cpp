//https://www.codechef.com/OCT19B/problems/S10E
#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int P[N];
        for(int i=0; i<N; i++)
            cin>>P[i];
        int temp=0;
        for(int i=0; i<N; i++){
            if(i==0)
                temp++;
            else if(i==1){
                if(P[i]<P[i-1])
                    temp++;
            }
            else if(i==2){
                if(P[i]<P[i-1] && P[i]<P[i-2])
                    temp++;
            }
            else if(i==3){
                if(P[i]<P[i-1] && P[i]<P[i-2] && P[i]<P[i-3])
                    temp++;
            }
            else if(i==4){
                if(P[i]<P[i-1] && P[i]<P[i-2] && P[i]<P[i-3] && P[i]<P[i-4])
                    temp++;
            }
            else{
                if(P[i]<P[i-1] && P[i]<P[i-2] && P[i]<P[i-3] && P[i]<P[i-4] && P[i]<P[i-5])
                    temp++;
            }
        }
        cout<<temp<<endl;
    }

    return 0;
}