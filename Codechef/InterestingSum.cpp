//https://www.codechef.com/SEPT19B/problems/CHEFINSQ
#include<iostream>
using namespace std;
unsigned long long int ncr(int n,int r){   
    unsigned long long int ans=1;
    if(r>n-r)
    r=n-r;
    
    for(int i=0;i<r;i++){
       ans=ans*(n-i);
       ans/=(i+1);
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n); 
        int last=arr[0],last_count=1,i;
        for(i=1;i<k;i++){
            if(arr[i]!=last){
                last_count=1;
                last=arr[i];
            }
            else
                last_count++;
        }
        int r=last_count;
        while(arr[i]==last&&i<n){
            last_count++;
            i++;
        }
        cout<<ncr(last_count,r)<<endl;
    }
}
