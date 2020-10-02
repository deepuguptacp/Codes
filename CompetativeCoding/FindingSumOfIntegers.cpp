#include<bits/stdc++.h>
using namespace std;
#define Num 1000000007
int sum;
void FUN(int n, int x, int y){
    vector<bool> arr(n+1, false);
    if (x <= n) 
        arr[x] = true; 
    if (y <= n) 
        arr[y] = true;
    int result = 0;
    for (int i = x; i <= n; i++){
        if (arr[i]){
            if (i+x <= n) 
                arr[i+x] = true; 
            if (i+y <= n) 
                arr[i+y] = true;
        } 
    }
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == false){
            sum += i;
            sum = sum % Num;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int A;
        cin>>A;
        sum = 0;
        int n = A * (A+1);
        FUN(n, A, A + 1);
        cout<<sum % Num<<endl;
    }
    return 0;
}