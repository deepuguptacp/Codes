#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
		int a[4*n];
		for(int i=0; i<4*n; i++)
			cin>>a[i];
		sort(a,a+4*n);
		int count=0;
		int area = a[0]*a[4*n-1];
		for(int i=0; i<4*n; i=i+2)
			if(a[i]*a[4*n-1-i] != area || a[i]!=a[i+1])
				count++;
		if(count > 0)
			cout<<"NO"<<endl;
		else 
			cout<<"YES"<<endl;
    }
    return 0;
}