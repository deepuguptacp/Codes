//https://codeforces.com/problemset/problem/1296/C
#include<iostream>
#include<string>
#include<utility>
#include<map>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        string s;
        cin>>n>>s;
        int x = 0, y = 0, min =- 1, lower =- 1;
        map<pair<int,int>, int> temp;
		temp[{0,0}] = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='L')
			    x--;
			else if(s[i]=='R')
			    x++;
			else if(s[i]=='U')
			    y++;
			else
			    y--;
            if(temp.find({x,y})==temp.end())
			    temp[{x,y}]=i+1;
			else{
                int low = temp[{x,y}];
				if((i+1-low) < min || min == -1){
				    min = i+1-low;
                    lower = low;
                }
				temp[{x,y}] = i+1;
            }
        }
        if(min==-1)
		    cout<<min<<endl;
		else
		    cout<<(lower+1)<<" "<<(lower+min)<<endl;
    }
    return 0;
}