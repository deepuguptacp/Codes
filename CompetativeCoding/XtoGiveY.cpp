#include<bits/stdc++.h> 
using namespace std;
#define MAX 50
void findSmallest(int n){
    int i, j = 0;
    int res[MAX];
    if(n < 10){
        cout<<n + 10; 
        return; 
    }
    for (i = 9; i > 1; i--) {
        while (n % i == 0){
            n = n / i; 
            res[j] = i; 
            j++; 
        } 
    }
    if(n > 10){
        cout<<0; 
        return; 
    }
    for(i = j - 1; i >= 0; i--) 
        cout<<res[i]; 
}
int main(){ 
    int n;
    cin>>n;
    findSmallest(n);
    cout<<endl;
    return 0; 
} 