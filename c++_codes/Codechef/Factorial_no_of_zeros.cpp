#include<iostream>
using namespace std;
int Zeroes(int n){
    int count = 0;  
    for (int i = 5; n / i >= 1; i *= 5){
        count += n / i; 
    }
    return count;
}

int main(){
    int n, i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    i=0;
    while(i<n){
        cout<<Zeroes(a[i])<<"\n";
        i++;
    }
    return 0;
}