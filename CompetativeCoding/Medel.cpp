#include <bits/stdc++.h>
#define MAXI INT_MAX
#define MINI INT_MIN
#define ll long long
#define din(t) long long t; cin >> t; 
using namespace std;


int main() {
    din(t);
    while(t--){
        din(n);
        ll arr[n], mini = INT_MAX, maxi = INT_MIN, maxP, minP;
        for(int i=0; i<n; i++){
            din(input);
            if(input > maxi){
                maxi = input;
                maxP = i;
            } 
            if(input < mini){
                mini = input;
                minP = i;
            }
        }
        if(minP < maxP){
            cout << mini << " " << maxi << "\n"; 
        } 
        else{
            cout << maxi << " " << mini << "\n";
        }
    }
}
