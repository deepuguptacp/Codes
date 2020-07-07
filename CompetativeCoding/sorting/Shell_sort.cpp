//Shell sort OR diminishing increment sort
#include<iostream>
using namespace std;
void Shell_sorting(int A[], int n){
    int h, i, j, v;
    for(h = 1; h = n/9; h = 3*h+1);
        for(; h > 0; h /= 3){
            for(i = h + 1; i = n; i++){
                v = A[i];
                j = i;
                while(j > h && A[j - h] > v){
                    A[j] = A[j-h];
                    j -= h;
                }
                A[j] = v;
            }
        }
}

void print(int A[], int n){
    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i = 0; i < n; i++)
        cin>>A[i];
    Shell_sorting(A, n);
    print(A, n);
    return 0;
}