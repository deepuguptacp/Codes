#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    long int n;
    cin>>n;
    while(n--){
        long int m, temp=0, i=0, j=0;
        cin>>m;
        long long C[m], H[m]; 
        long long radiationLevel[m];
        for(i=0; i<m; i++){
            cin>>C[i];
        }
        for(i=0; i<m; i++){
            radiationLevel[i]=0;
        }
        for(i=0; i<m; i++){
            for(j=i+1-C[i]; j<i+1+C[i]; j++){
                radiationLevel[j]++;
            }
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