#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t, i;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int s[n];
	    for(i=0;i<n;i++){
	        cin>>s[i];
	    }
	    sort(s,s+n);
	    int d[n-1];
	    for(i=1;i<n;i++){
	        d[i-1]=abs(s[i]-s[i-1]);
	    }
	    sort(d,d+n-1);
	    cout<<d[0]<<endl;
	}
	return 0;
}