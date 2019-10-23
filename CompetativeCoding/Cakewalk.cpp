//https://www.codechef.com/COOK111B/problems/CKWLK
#include<iostream>
using namespace std;
#define ll long long
int main(){
	int T;
	cin>>T;
	while(T--){	
		ll N;
		int temp=0, count=0;
		cin>>N;
		while(N%10 == 0){
			N/=10;
			temp++;
		}
		while(N%2 == 0){
			N /= 2;
			count++;
		}
		if(N == 1 && temp >= count) 
			cout<<"Yes\n";
		else 
			cout<<"No\n";
	}

	return 0;
}