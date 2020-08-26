#include<bits/stdc++.h>
using namespace std;

void sortbyProbability(int pro[], int n){
    
}

int main(){
    string s;
    cout<<"Input the string : ";
    cin>>s;
    map<char, double> mp;
    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }
    int l = s.length();
    map<char, double> :: iterator itr;
    for(itr = mp.begin(); itr != mp.end(); itr++){
        itr->second = itr->second/l;
    }
    // for(itr = mp.begin(); itr != mp.end(); itr++){
    //     cout<<itr->first<<"   "<<itr->second<<endl;
    // }
    double pro[mp.size()];
    int i = 0;
    for(itr = mp.begin(); itr != mp.end(); itr++){
        pro[i++] = itr->second;
    }
    sortbyProbability(pro, mp.size());
    return 0;
}