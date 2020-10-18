//Problem statement :- Find the number of characters between two "programmer" in a string
// Ex:- input:- proxxxrermmxcvgbhngrammerprox,    output :- 8
#include<bits/stdc++.h>
using namespace std;
int CountChar(string s){

    int l = s.length();
    string p = "programmer";
    map<char, int> mp1, mp2;
    
    for(int i = 0; i < p.length(); i++){
        mp1[p[i]]++;
        mp2[p[i]]++;
    }
    
    int start = 0, last = l - 1;
    while(!mp1.empty() && start < l){
        for(auto i = mp1.begin(); i != mp1.end(); i++){
            if(i->first == s[start] && i->second > 0){
                mp1[s[start]]--;
            }
            if(i->second == 0){
                mp1.erase(i->first);
            }
        }
        start++;
    }
    
    while(!mp2.empty() && last >= 0){
        for(auto i = mp2.begin(); i != mp2.end(); i++){
            if(i->first == s[start] && i->second > 0){
                mp2[s[last]]--;
            }
            if(i->second == 0){
                mp2.erase(i->first);
            }
        }
        last--;
    }
    
    cout<<start<<" "<<last<<endl;
    return last-start;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        cout<<CountChar(s)<<endl;
    }
    return 0;
}