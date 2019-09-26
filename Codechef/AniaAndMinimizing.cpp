//https://codeforces.com/problemset/problem/1230/B
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, k;
    string s;
    cin>>n>>k;
    cin>>s;
    if (n==1 && k!= 0){
		cout << 0;
		return 0;
	}
	if (s[0] != '1' && k != 0) 
        s[0] = '1';
        k--;
	int i=1;
	while (k-- && i<n){
		if (s[i]=='0') 
            k++;
		s[i++] = '0';
	}
	cout << s;
	return 0;
}