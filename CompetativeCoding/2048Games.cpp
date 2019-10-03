#include<iostream>
using namespace std;
#define ll long long
int main(){
    int q;
    cin>>q;
    while(q--){
        int n, temp=0;
        cin>>n;
        ll arr[n];
        for(int i=0; i<n;i++){
            cin>>arr[i];
            if(arr[i] <= 2048)
                temp += arr[i];
        }
        if(temp>=2048)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}