#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
	long long t=0, n=0,  k;
	cin>>t;
	while(t-->0){
	    cin>>n;
	    cin>>k;
	    n=n/k;
	    if(n%k!=0)
	        cout<<"YES";
	    else
	        cout<<"NO";
	        cout<<endl;
	}
	return 0;
}
