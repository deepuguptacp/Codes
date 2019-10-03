#include<iostream>
#include<vector>

using namespace std;
int t, b, p, f, h, c, i=0;

int main(){
    cin>>t;
    while(t--){
        long long int price=0;
        cin>>b>>p>>f;
        cin>>h>>c;
        if(h>c){
            while(b>1 && p>0){
                price+=h;
                b=b-2;
                p--;
            }
            while(b>1 && f>0){
                price+=c;
                f--;
                b=b-2;
            }
        }
        else{
            while(b>1 && f>0){
                price+=c;
                f--;
                b=b-2;
            }
            while(b>1 && p>0){
                price+=h;
                b=b-2;
                p--;
            }
        }
        cout<<price<<endl;
    }
    return 0;
}