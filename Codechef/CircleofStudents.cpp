#include<iostream>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n, i, flag=0;
        cin>>n;
        int p[n];
        for(i=0; i<n; i++){
            cin>>p[i];
        }
        for(i=0; i<n-1; i++){
            if(abs(p[i]-p[i+1])==1||abs(p[i]-p[i+1])==n-1)
			    continue;
		    else{
			    flag=1;
			    break;
		    }
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
    return 0;
}