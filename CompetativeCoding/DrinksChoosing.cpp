#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, k, i, X=0, Y=0;
    cin>>n>>k;
    int S[n];
    for (i=0; i<n; i++){
        cin>>S[i];
    }
    for(i=1;i<=k;++i){   
        X=X+S[i]/2*2;
        Y=Y+S[i]%2;
    }
    cout<<X+(Y+1)/2;
    
    
    return 0;
}