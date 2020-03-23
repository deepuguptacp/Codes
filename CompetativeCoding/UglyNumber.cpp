//https://practice.geeksforgeeks.org/problems/ugly-numbers/0
#include<bits/stdc++.h>
using namespace std;

int maxDivide(int a, int b){ 
    while (a%b == 0) 
        a = a/b;  
    return a; 
}

int isUgly(int n){
    n = maxDivide(n, 2);
    n = maxDivide(n, 3);
    n = maxDivide(n, 5);
    return (n == 1)? 1 : 0;
}

int UglyNo(int a){
    int i=1, count=1;
    while(a>count){ 
        i++;
        if(isUgly(i)) 
            count++;  
    } 
    return i; 
}
/* Next METHOD O(n)
long long unsigned int getUglyNo(int n){
    long long unsigned int arr[n];
    arr[0]=1
    long long unsigned int div2=0,div3=0,div5=0;
    long long unsigned int next_div2=2;
    long long unsigned int next_div3=3;
    long long unsigned int next_div5=5;
    for(int i=1;i<n;i++){
        long long unsigned int next_ugly=min(next_div2,min(next_div3,next_div5));
        arr[i]=next_ugly;
        if(next_ugly==next_div2){
            div2=div2+1;
            next_div2=arr[div2]*2;
        }
        if(next_ugly==next_div3){
            div3=div3+1;
            next_div3=arr[div3]*3;
        }
        if(next_ugly==next_div5){
            div5=div5+1;
            next_div5=arr[div5]*5;
        }
    }
    return arr[n-1];
}
*/
int main(){
	int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        cout<<getUglyNo(N)<<endl;
    }
	return 0;
}