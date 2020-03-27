//https://practice.geeksforgeeks.org/problems/love-for-the-twins/0
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n, ans = 0;
        cin>>n;
        int A[n];
        map<int, int> m;
        for(int i=0; i<n; i++){
            int num;
            cin>>num;
            if(m.find(num) == m.end()){
	            m[num] = 1;
	        }
	        else{
	            m[num]++;
	        }
        }
            map<int, int> :: iterator it = m.begin();
	        while(it != m.end()){
	            ans = ans + ((it->second)/2)*2;
	            it++;
	        }
	        cout<<ans<<endl;
    }
    return 0;
}