//https://www.codechef.com/MAY20B/problems/CHANDF
#include <bits/stdc++.h>
using namespace std;
#define M 64

int main() {
    int t;
    cin>>t;
    while(t--){
        long long x,y,l,r;
        cin>>x>>y>>l>>r;
        bitset<M> bsetx(x);
        bitset<M> bsety(y);
        bitset<M> bsetr(r);
        bitset<M> bset;
        long long max=(x&l)*(y&l),z=l;
        for(int i = 63; i >= 0; i--){
            if(bsetr[i] == 1){
                bset.flip();
                for(int j = 63; j >= i; j--)
                    bset[j] = bsetr[j];
                bset[i] = 0;
                if(bset.to_ulong() < l){
                    bset.reset();
                    continue;
                }
                for(int j = i-1; j >= 0; j--){
                    if(bsetx[j] == 0 && bsety[j] == 0){
                        bset[j] = 0;
                        if(bset.to_ulong() < l)
                            bset[j] = 1;
                    }
                    else 
                        bset[j] = 1;
                }
                if(bset.to_ulong() >= l){
                    long long product = (x & bset.to_ulong()) * (y & bset.to_ulong());
                    if(max < product){
                        max = product;
                        z = bset.to_ulong();
                    }
                }
                bset.reset();
            }
        }
        if(max < (x & r) * ( y & r)) 
            z = r;
        cout<<z<<endl;
    }
    return 0;
}