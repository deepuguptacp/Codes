//https://www.codechef.com/MAY20B/problems/COVID19
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int X[n];
        for(int i=0; i<n; i++){
            cin>>X[i];
        }
        int minInfect = INT_MAX;
        int maxInfect = INT_MIN;
        int Infect = 1;
        for(int i = 0; i<n-1; i++){
            if(X[i+1] - X[i] <=2){
                Infect++;
            } else {
                minInfect = min(Infect, minInfect);
                maxInfect = max(Infect, maxInfect);
                Infect = 1;
            }
        }
        minInfect = min(Infect, minInfect);
        maxInfect = max(Infect, maxInfect);
        cout<<minInfect<<" "<<maxInfect<<endl;
    }
    return 0;
}