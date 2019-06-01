#include<iostream>
using namespace std;
int main(){
     int i=0,a[10]={0,1,2,3,4,5,6,7,8,9};
     int l=1,u=10,mid,key;
     cout<<"Enter the key\n";
     cin>>key;
     bool flag=true;
     while(l<u&&flag==true){
        mid=(l+u)/2;
        if(key==a[mid]){
         cout<<"Sucessful\n";
         flag=false;
         }
       else if(key>a[mid]){
           l=mid+1;
          }
       else{
         u=mid-1;
         }
     //i++;
        
   }
       if(flag==true)
       cout<<"Unsucessful\n";
   return 0;
}
