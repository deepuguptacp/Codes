//https://practice.geeksforgeeks.org/problems/pythagorean-triplet/0/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool pythagoras(int A[], int N){
    for(int i=0;  i<N; i++)
        A[i] = A[i]*A[i];
    sort(A, A+N);
    int a, b;
    for(int i=N-1; i>=2; i--){
        a=0;
        b=i-1;
        while(a<b){
            if(A[a]+A[b]==A[i])
                return true;
            (A[a]+A[b] < A[i]) ? a++ : b--;
        }
    }
    return false;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N];
        for(int i=0; i<N; i++)
            cin>>A[i];
        //sort(A, A+N);
        int temp = pythagoras(A, N);
        if(temp == true)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;        
    }
	
	return 0;
}