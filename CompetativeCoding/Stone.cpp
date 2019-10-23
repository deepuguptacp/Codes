//https://codeforces.com/contest/1236/problem/0
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int temp=0;
		int a, b, c;
		cin>>a>>b>>c;
		while(b>=1 && c>=2){
			temp+=3;
			b--;
			c-=2;
		}
		while(a>=1 && b>=2){
			temp+=3;
			a--;
			b-=2;
		}
		cout<<temp<<endl;
	}

	return 0;
}
