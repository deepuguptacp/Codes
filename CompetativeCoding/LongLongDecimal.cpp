//https://practice.geeksforgeeks.org/problems/long-long-decimal/0/
// 355/113 upto k decimal places
#include<bits/stdc++.h>
using namespace std;
int x = 355;
int y = 113;
int main(){
    int T;
    cin>>T;
    while(T--){
        int k;
        cin>>k;
        int d = x/y;
        if(k == 0) 
            cout<<d;
        else{
            for (int i = 0; i <= k; i++) { 
                cout << d; 
                x = x - (y * d); 
                if (x == 0) 
                    break; 
                x = x * 10; 
                d = x / y; 
                if (i == 0) 
                    cout << "."; 
            }
        }
        cout<<endl;
    }
    return 0;
}