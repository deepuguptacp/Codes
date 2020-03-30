//https://practice.geeksforgeeks.org/problems/special-keyboard/0
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Keyboard(int n){
    if(n<5)
        return n;
    else
        return max(4 * Keyboard(n-5), 3 * Keyboard(n-4));
}

int main(){
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<Keyboard(n)<<endl;
    }
	return 0;
}