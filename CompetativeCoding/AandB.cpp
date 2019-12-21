//https://codeforces.com/problemset/problem/1278/B
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int c = abs(a-b);
        int sum = 0, n = 0;
        while(sum < c || (sum-c) % 2 != 0){
            n++;
            sum += n;
        }
        cout<<n<<endl;
    }
    return 0;
}