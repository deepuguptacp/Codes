#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
    long int n;
    cin>>n;
    while(n--){
        long long int m, temp=0, i=0, j=0, zero=0;
        cin>>m;
        long long int C[m], H[m]; 
        long long int radiationLevel[m];
        for(i=0; i<m; i++){
            cin>>C[i];
        }
        for(i=0; i<m; i++){
            radiationLevel[i]=0;
        }
        for(i=0; i<m; i++){
            long long int x = i-C[i];
            long long int y = i+C[i];
            x = max(zero, x);
            y = min(m-1, y);
            radiationLevel[x]+=1;
            if(y!=m-1)
                radiationLevel[y+1]-=1;
        }
        for(i=1; i<m; i++){
            radiationLevel[i]=radiationLevel[i-1]+radiationLevel[i];
        }
        for(i=0; i<m; i++){
            cin>>H[i];
        }
        sort(H, H+m);
        sort(radiationLevel, radiationLevel+m);
        for(i=0; i<m; i++){
            if(H[i]==radiationLevel[i])
                temp=1;
            else{
                temp=0;
                break;
            }
        }
        if(temp==1)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
    return 0;
}