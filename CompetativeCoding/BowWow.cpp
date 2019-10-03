#include<iostream>
#include<string>

using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int ans=0,n=s.size(),flag=0,i;
	if(n>1){
	    for(i=1;i<n;i++){
		    if(s[i]=='1'){
		        flag=1;
                break;
            }
	    }   
    }
	if(flag==1 && (n-1)%2==0)
	    cout<<n/2+1;
	else
	    cout<<n/2;
	return 0;
}