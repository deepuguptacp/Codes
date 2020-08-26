#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long freq[26] = {0};
        string s, p;
        cin>>s>>p;
        for(int i = 0; i < s.length(); i++){
            freq[s[i] - 'a']++;
        }
        for(int i = 0; i < p.length(); i++){
            freq[p[i] - 'a']--;
        }
        string res1 = "", res2 = "";
        long long start = p[0] - 'a';
        for(int i = 0; i < 26; i++){
            if(i != start){
                for(int j = 0; j < freq[i]; j++){
                    char k = i + 'a';
                    res1 += k;
                    res2 += k;
                }
            } else {
                res2 += p;
                for(int j = 0; j < freq[i]; j++){
                    char k = i + 'a';
                    res1 += k;
                    res2 += k;
                }
                res1 += p;
            }
        }
        if(res1 < res2)
            cout<<res1<<endl;
        else
            cout<<res2<<endl;
    }
    return 0;
}