#include<bits/stdc++.h>
using namespace std;

int partition(int A[], int low, int high){
    int left, right, pivot_item = A[low];
    left = low;
    right = high;
    while(left < right){
        while(A[left] <= pivot_item){
            left++;
        }
        while(A[right] > pivot_item){
            right--;
        }
        if(left < right){
            int temp = A[left];
            A[left] = A[right];
            A[right] = temp;
        }
    }
    A[low] = A[right];
    A[right] = pivot_item;
    return right;
}

void quick_sorting(int A[], int low, int high){
    int pivot;
    if(low < high){
        pivot = partition(A, low, high);
        quick_sorting(A, low, pivot-1);
        quick_sorting(A, pivot+1, high);
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
    quick_sorting(A, 0, n-1);
    print(A, n);
    return 0;
}