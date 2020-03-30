#include<bits/stdc++.h>
using namespace std;
int evenodd(int a[],int n){
    int j=-1,cnt=0;
   for(int i=0;i<n;i++){
        if(a[i]%2==0){
            ++cnt;
            j++;
            swap(a[i],a[j]);
            
        }
        
    }
    sort(a,a+cnt);
    sort(a+cnt,a+n);
    for(int b=0;b<n;b++){
        cout<<a[b]<<" ";
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	   evenodd(a,n);
	    cout<<endl;
	}
    return 0;
}