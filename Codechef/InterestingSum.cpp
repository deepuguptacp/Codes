//https://www.codechef.com/SEPT19B/problems/CHEFINSQ
#include <iostream>
#include<algorithm>
using namespace std; 
int minsum=0, temp=0;
void combinationUtil(int arr[], int n, int r, int index, int data[], int i);
void printCombination(int arr[], int n, int r) {
	int data[r]; 
	combinationUtil(arr, n, r, 0, data, 0); 
}
void combinationUtil(int arr[], int n, int r, int index, int data[], int i){
	if (index == r){
        int count=0;
		for (int j = 0; j < r; j++){
			count=count+data[j];
        }
        if(count==minsum)
            temp++; 
	}
	//data[index] = arr[i]; 
	combinationUtil(arr, n, r, index + 1, data, i + 1);
	combinationUtil(arr, n, r, index, data, i + 1); 
}
int main(){ 
	int t;
    cin>>t;
    while(t--){
        int N, K, i=0, count=0;
        cin>>N>>K;
        int A[N];
        for(i=0; i<N; i++)
            cin>>A[i];
        sort(A, A + N);
        for(i=0; i<K; i++)
            minsum += A[i];
        printCombination(A, N, K);
        cout<<temp<<endl;
    }
    return 0;
} 
