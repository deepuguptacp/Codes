#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K, X, Y;
        cin>>N>>K>>X>>Y;
        vector<int> v;
        int temp = N;
        int check = 0;
        while(temp--){
            X = (X + K) % N;
            if(X == Y){
                check = 1;
                break;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}