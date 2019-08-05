/*RADIX SORT ALGORITHM
* Sorting is done digit by digit from ones place to next place.
Example :-  170, 45, 75, 90, 802, 24, 2, 66
            170, 90, 802, 2, 24, 45, 75, 66
            802, 2, 24, 45, 66, 170, 75, 90
            2, 24, 45, 66, 75, 90, 170, 802
multiple keys with the same value are placed in the sorted array 
in the same order that they appear in the input array*/
#include<iostream>
#include<vector>
using namespace std;
void countSort(int arr[], int n, int exp){
    int output[n], i, count[10] = {0};
    for (i = 0; i < n; i++) 
        count[(arr[i]/exp)%10]++;
    
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1];
//
    for (i = n - 1; i >= 0; i--){ 
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i]; 
        count[ (arr[i]/exp)%10 ]--; 
    }
    for (i = 0; i < n; i++) 
        arr[i] = output[i];
}

void radixSort(int arr[], int n){
    int m=0;
    for(int i=0; i<n; i++){
        if(arr[i] > m)
            m=arr[i];
    }
    for(int exp = 1; m/exp > 0; exp *= 10) 
        countSort(arr, n, exp);
}

int main() {
    int n, i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    radixSort(arr, n);
    for(i=0; i<n; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
    return 0;
}
