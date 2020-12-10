#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        if(n == k){
            for(int i = 0; i < n; i++){
                cout<<i + 1<<" ";
            }
            cout<<endl;
        } else {
            int A[n];
            if(n & 1){
                for(int i = 0; i < n; i++){
                    A[i] = (i + 1) * pow(-1, i + 2);
                }
            } else {
                for(int i = 0; i < n; i++){
                    A[i] = (i + 1) * pow(-1, i + 1);
                }
            }
            int sum = 1, count, diff = 0;
            count = ceil((double(n) / 2));
            for(int i = 1; i < n; i++){
                sum += A[i];
                if(sum > 0){
                    if(count < k){
                        diff = k - count;
                        for(int j = n - 1; j >= 0; j--){
                            if(A[j] < 0){
                                A[j] = A[j] * -1;
                                count++;
                                if(count == k){
                                    break;
                                }
                            }
                        }
                    }
                    else if(count > k){
                        diff = count - k;
                        for(int j = n - 1; j >= 0; j--){
                            if(A[j] > 0){
                                A[j] = A[j] * -1;
                                count--;
                                if(count == k){
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            for(int i = 0; i < n; i++){
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}