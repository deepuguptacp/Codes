//https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void permutate(string s, int l, int r){
    if (l == r)  
        cout<<s<<" ";  
    else{  
        // Permutations made  
        for (int i = l; i <= r; i++){
            swap(s[l], s[i]);
            permutate(s, l+1, r);
            swap(s[l], s[i]);  
        }  
    }  
}
int main(){
	int T;
	cin>>T;
	while(T--){
	    string s;
	    cin>>s;
	    int n=s.size();
	    permutate(s, 0, n-1);
	    cout<<endl;
	}
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		sort(s.begin(),s.end());
	    do{
	        std::cout << s << " ";
	    }
	    while ( std::next_permutation(s.begin(), s.end()) );
		cout<<endl;
	}
	return 0;
}
*/