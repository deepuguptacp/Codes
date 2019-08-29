#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N, a, b, i;
        int x=0, y=0;
        cin>>N>>a>>b;
        long long num[N];
        for(i=0; i<N; i++)
            cin>>num[i];
        for(i=0; i<N; i++){
            if(num[i]%a == 0)
                x++;
            else if(num[i]%b == 0)
                y++;
        }
        if(x<=y)
            cout<<"ALICE"<<endl;
        else if(x>y)
            cout<<"BOB"<<endl;
    }
    return 0;
}