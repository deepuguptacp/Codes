//https://practice.geeksforgeeks.org/problems/check-set-bits/0/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int T;
    cin>>T;
    while(T--){
        int N, temp=0;
        cin>>N;
        if(N==0)
            cout<<"NO"<<endl;
        else if(N==1)
            cout<<"YES"<<endl;
        else{
            int i=0, k=2;
            while(k<N){
                k=pow(2, i);
                if(k-1 == N){
                    temp=1;
                    break;
                }
                else
                    i++;
            }
            if(temp==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
	
	return 0;
}