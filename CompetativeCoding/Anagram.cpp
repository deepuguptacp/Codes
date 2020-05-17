#include<bits/stdc++.h>
using namespace std;
vector<int> findAnagrams1(string s, string p) {
    int m = s.length();
    int n = p.length();
    vector<int> res;
    if(m < n)
        return res;
    vector<int> s_char(26);
    vector<int> p_char(26);
    for(int i = 0; i < n; i++){
        p_char[p[i]-'a']++;
        s_char[s[i]-'a']++;
    }
    if(s_char == p_char){
        res.push_back(0);
    }
    for(int i = n; i < m; i++){
        s_char[s[i] - 'a']++;
    s_char[s[i - n] - 'a']--;
    if(s_char == p_char)
        res.push_back(i- n + 1);
    }
    return res;
}
// 34/36
    
vector<int> findAnagrams2(string s, string p) {
    int m = s.length();
    int n = p.length();
    vector<int> res;
    sort(p.begin(), p.end());
    for(int i = 0; i < m; i++){
        string temp;
        for(int j = 0; j < n && i+j < m; j++){
            // if(i+j < n)
                temp.push_back(s[i + j]);
        }
        sort(temp.begin(), temp.end());
        if(!temp.compare(p)){
            res.push_back(i);
        }
    }
    return res;
}

int main(){
    cout<<"Enter the string : ";
    string s;
    cin>>s;
    cout<<"Enter the the substring : ";
    string p;
    cin>>p;
    int k;
    vector<int> sol;
    while(1){
        cout<<"1. Easy method passes not for very long s."<<endl<<"2. Passes every test case."<<endl;
        cout<<"3. END"<<endl;
        cin>>k;
        switch(k){
            case 1 :
            sol = findAnagrams2(s, p);
            cout<<"Solution : ";
            for(int i = 0; i < sol.size(); i++)
                cout<<sol[i]<<" ";
            cout<<endl;
            break;
            case 2 :
            sol = findAnagrams2(s, p);
            cout<<"Solution : ";
            for(int i = 0; i < sol.size(); i++)
                cout<<sol[i]<<" ";
            cout<<endl;
            break;
            case 3 :
            return 0;
        }
    }
    return 0;
}