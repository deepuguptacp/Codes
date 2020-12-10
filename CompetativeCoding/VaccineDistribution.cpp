#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, D;
        cin>>N>>D;
        int A[N];
        for(int i = 0; i < N; i++){
            cin>>A[i];
        }
        if (D == 1) {
            cout<<N<<endl;
        } else {
            int polluted = 0;
            for (int i = 0; i < N; i++) {
                int a = A[i];
                if (a >= 80 || a <= 9) {
                    polluted++;
                }
            }
            int unpolluted = N - polluted;
            int days = 0;
            if (polluted == 0) {
                days += ceil(((double) unpolluted / (double) D));
            }
            else if (unpolluted == 0) {
                days += ceil(((double) polluted / (double) D));
            }
            else {
                days += ceil(((double) polluted / (double) D)) + ceil(((double) unpolluted / (double) D));
            }
            cout<<days<<endl;
        }
    }
    return 0;
}