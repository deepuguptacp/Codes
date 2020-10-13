#include <bits/stdc++.h>
using namespace std;
map<int, int> mp1;

int Squares(int Y[], int M){
	map<int, int> mp2;
	int i, j, ans = 0;
	
	for (i = 0; i < M; i++) {
		for (j = i + 1; j < M; j++) {
			int dist = abs(Y[i] - Y[j]);
			mp2[dist]++;
		}
	}
	for (auto i = mp1.begin(); i != mp1.end(); i++) {
		if (mp2.find(i->first) != mp2.end()) {
			ans += (i->second * mp2[i->first]);
		}
	}
	return ans;
}

bool Findi(int B[], int N, int C){
    sort(B, B + N);
    int low = 0, high = N;
    while(low < high){
        int temp = low + high / 2;
        if(B[temp] == C){
            return true;
        }
        else if(B[temp] < C){
            high = temp - 1;
        } else {
            low = temp + 1;
        }
    }
    return false;
}

int main(){
    int W, H, N, M;
    cin>>W>>H>>N>>M;
    int A[N], B[M + 1];
    for(int i = 0; i < N; i++){
        cin>>A[i];
    }
    for(int i = 0; i < M; i++){
        cin>>B[i];
    }
    for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			int dist = abs(A[i] - A[j]);
			mp1[dist]++;
		}
	}
	int res = INT_MIN;
    for(int i = 0; i < H; i++){
        if(Findi(B, M+1, i)){
            continue;
        } else {
            B[M] = i;
            res = max(res, Squares(B, M + 1));
        }
    }
    cout<<res<<endl;
	return 0;
}
