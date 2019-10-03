//https://www.codechef.com/SEPT19B/problems/FIBEASY
#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
ll f[60] = {0};
void fib(ll size){
    f[0] = 0; 
    f[1] = 1;
    for (ll i = 2; i <= size; i++) 
        f[i] = (f[i - 1] + f[i - 2]) % 10;
} 
int main(){
    ll T;
    cin>>T;
    fib(60);
    while(T--){
        ll N, i=0;
        cin>>N;
        ll min1=0;
        /*for(i=0; pow(2, i) <= N; i++)
            min1 = min((ll)pow(2, i), N);*/
        while(N>0){
            N = N >> 1;
            min1++;
        }
        ll req = pow(2, min1-1);
        cout<<f[(req-1)%60]<<endl;
    }
    return 0;
}