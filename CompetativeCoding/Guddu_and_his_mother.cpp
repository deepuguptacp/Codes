#include <iostream>
using namespace std;

int main() {
// your code goes here
    long test,count,c,i,x,ans,sum;
    vector<long> a;
    vector<long> xora;
    map<long,vector<long>> mp ;

    cin>>test;
    while(test--) {
        ans=0;
        mp.clear();
        a.clear();
        xora.clear();
        cin>>count;
        cin>>x;
        a.push_back(x);
        xora.push_back(x);
        mp.insert (pair<long,vector<long>>(x,{0}));
        for(i=1;i<count;i++) {
            cin>>x;
            a.push_back(x);
            xora.push_back(xora[i-1]^x);
            mp[xora[i]].push_back(i);
        }
        for (auto& x: mp) {
            long l=x.second.size();
            if(l>1) {
                sum=0;
                for(long j=0;j<l;j++) {
                    sum += (x.second[j]*(j) -x.second[j]*(l-j-1));
                }
                ans+=sum - (l*(l-1)/2);
            }
            if(x.first==0) {
                for(long j=0;j<l;j++) {
                    ans=ans+x.second[j];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}