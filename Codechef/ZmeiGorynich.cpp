//https://codeforces.com/problemset/problem/1217/B
#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
	    int n, x, i, d, h, blow=INT_MIN, D=INT_MIN;
	    cin>>n>>x;
	    for(i=0; i<n; i++){
		    cin>>d>>h;
		    D=max(D,d);
		    blow=max(blow,d-h);
	    }
	    if(D >= x)
	        cout<<1<<endl;
	    else if(blow <= 0)
	        cout<<-1<<endl;
	    else{
		    int ans=1;
		    x-=D;
		    ans += x/blow;
		    x -= blow*(x/blow);
		    if(x>0)
		        ans++;
		    cout<<ans<<endl;
	    }
	}
	return 0;
}