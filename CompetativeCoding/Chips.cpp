//https://codeforces.com/problemset/problem/1244/F
#include<iostream>
#include<cstring>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long

int main(){
	ll n, k;
	cin>>n>>k;
	string IC, output;
	cin>>IC;
	while(k--){
		for(ll i=0; i<n; i++){
			int black=0, white=0;
			if(IC[(i+n-1)%n]=='B')
				black++;
			if(IC[i] == 'B')
				black++;
			if(IC[(i+n+1)%n]=='B')
				black++;

			if(black>=2)
				output[i]='B';
			else
				output[i]='W';

		}
		//strcpy(IC, output);
		for(ll j = 0; output[j] != '\0'; j++)
      	IC[j] = output[j];
	}
	for(ll i=0; i<n; i++)
		cout<<output[i];
	cout<<endl;
	return 0;
}