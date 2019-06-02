/*Merge Sort OR Combined sorting technique*/
#include<iostream>
#include<cstdlib>
using namespace std;
void merge(int a[], int b[], int m, int n){
    int k = m + n + 1;
    while(m >= 0 && n >= 0){
        if(a[m] > b[n])
            a[k--] = a[m--];
        else
            a[k--] = b[n--];
    }
    while(n>=0){
        a[k--] = b[n--];
    }
}
void rearrange(int a[], int b[], int m, int n){
    int k=0;
    for(int i; i<m; i++){
        if(a[i] != 0)
            a[k++] = a[i];
    }
    merge(a, b, k-1, n-1);
}
int main(){
    int m, n, i;
    cout<<"Input the length of the two arrays : ";
    cin>>m>>n;
    int a[m], b[n];
    cout<<"Elements of first array : ";
    for(i=0; i<m; i++)
        cin>>a[i];
    cout<<"Input the elements of second array : ";
    for(i=0; i<n; i++)    
        cin>>b[i];
    rearrange(a, b, m, n);
    for(i=0; i<m; i++)
        cout<<a[i]<<"\t";
    cout<<"\n";
    return 0;
}