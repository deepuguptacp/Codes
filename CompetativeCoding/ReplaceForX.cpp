#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findIndex(int A[], int n, int x, int p){
    int minElement = INT_MAX, index = 0;
    for(int i = 0; i < n; i++){
        if(A[i] == x){
            if(abs(p - i) < minElement){
                minElement = abs(p - i);
                index = i;
            }
        }
    }
    return index;
}

void ReplaceX(){
    int N, X, p, k;
        cin>>N>>X>>p>>k;
        int A[N];
        for(int i = 0; i < N; i++){
            cin>>A[i];
        }
        sort(A, A + N);
        int ind = findIndex(A, N, X, p);
        int temp = 0;
        if(A[ind] != X){
            A[k-1] = X;
            sort(A, A + N);
            temp++;
        }
        if(A[p - 1] == X){
            cout<<0+temp;
            return;
        }
        if(p < k && A[p - 1] < X){
            cout<<-1;
            return;
        }
        if(p > k && A[p - 1] > X){
            cout<<-1;
            return;
        }
        ind = findIndex(A, N, X, p) + 1;
        cout<<abs(p - ind) + temp;
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        ReplaceX();
        cout<<"\n";
    }
	return 0;
}