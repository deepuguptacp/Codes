//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/
//algorithm/roy-and-symmetric-logos-1/
#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        char arr[N][N];
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                cin>>arr[i][j];
        int flag=0;
        for(int k=0; k<N; k++){
            for(int l=0; l<N; l++){
                if(arr[k][l]!=arr[k][N-1-l] || arr[k][l]!=arr[N-1-k][l] || arr[N-1-k][l]!=arr[N-1-k][N-1-l]){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        
    }
    return 0;
}
