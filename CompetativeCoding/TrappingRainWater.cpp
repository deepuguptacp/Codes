//https://practice.geeksforgeeks.org/problems/trapping-rain-water/0/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10000000];
ll TrappingWater(ll n){
    ll left_max = 0, right_max = 0, result = 0;
    ll low = 0, high = n-1;   
    while(low <= high){
        if(a[low] < a[high]){
            if(a[low] > left_max){
                left_max = a[low];
            }
            else
                result += left_max-a[low];
            low++;
        }
        else{
            if(a[high] > right_max){
                right_max = a[high];
            }
            else
                result += right_max-a[high];
            high--;
        }
    }
    return result;
}
int main(){   
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        cout << TrappingWater(n) << endl;
    }
    return 0;
}
