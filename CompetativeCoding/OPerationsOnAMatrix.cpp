//https://www.codechef.com/OCT19B/problems/SAKTAN
#include <iostream>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >>t;
    for(int s=0;s<t;s++){
     ll n,m,q;
     cin >> n >> m >> q;
     ll x,y;
     ll row[n] = {0};
     ll col[m] = {0};
     ll even1,odd1,even2,odd2;
     odd1 = odd2 = 0;
     even1 = n;
     even2 = m;
     for(ll i=0;i<q;i++){
         cin >> x >> y;
         row[x-1]++;
         col[y-1]++;
     }
     for(ll i=0;i<n;i++){
         if(row[i]&1){
             odd1++;
             even1--;
         }
     }
        for(ll j=0;j<m;j++){
         if(col[j]&1){
             odd2++;
             even2--;
         }
 }
    ll ans = (even1*odd2)+(odd1*even2);
    cout << ans << endl;
    }
        return 0;
}