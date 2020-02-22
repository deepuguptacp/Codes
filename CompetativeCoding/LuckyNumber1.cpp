//https://www.codechef.com/STRT2020/problems/LUCKYNO
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        vector<int> A;
        int flag=0;
        while(N!=0){
            A.push_back(N%10);
            N=N/10;
        }
        sort(A.begin(), A.end());
        for(int i=1; i<A.size(); i++){
            if(abs(A[i]-A[i-1])>2){
                flag=1;
                break;
            }
            else
                continue;
        }
        if(flag == 1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}