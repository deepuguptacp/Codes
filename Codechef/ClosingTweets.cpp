#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n,k,c=0;
    cin>>n>>k;
    string s;
    int x;
    int a[n];
    for(int i=0;i<n;i++) 
        a[i]=0;
    while(k--){
        cin>>s;
        if(s=="CLICK"){
            cin>>x;
            if(a[x-1]==0) {
                a[x-1]=1;
                c++;
            }
            else{
                a[x-1]=0;
                c--;
            }
        }
        else if(s=="CLOSEALL"){
            for(int i=0;i<n;i++)  
                a[i]=0;
            c=0;
        }
        cout<<c<<endl;
    }
    return 0;
}