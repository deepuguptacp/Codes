#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long t=0, i=0, n=0, temp=0;
    cin>>t;
    while(t-->0){
        cin>>n;
        long long A[n], B[n], score[n];
        for(i=0; i<n; i++){
            cin>>temp;
            A[i]=temp*20;
        }
        for(i=0; i<n; i++){
            cin>>temp;
            B[i]=temp*10;
        }
        for(i=0; i<n; i++){
            if(A[i]-B[i]>=temp)
                temp=A[i]-B[i];
        }
        cout<<temp<<endl;
    }
    return 0;
}