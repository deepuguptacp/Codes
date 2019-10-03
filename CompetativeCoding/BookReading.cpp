#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        long long n, m, i=0, sum=0;
        cin>>n>>m;
        long long count=n/m;
        for(i=1; i<10; i++)
            sum+=(m*i)%10;
        sum *= count/10;
        for(i=1; i<=(count%10); i++)
            sum+=(m*i)%10;
        cout<<sum<<endl;
    }

    return 0;
}