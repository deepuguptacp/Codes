//https://codeforces.com/problemset/problem/1079/A
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int maximum=1, temp=1, number=1;
    sort(a, a+n);
    for(int j=1; j<n; j++){
        if(a[j] == a[j-1])
            temp++;
        else{
            temp=1;
            number++;
        }
        maximum = max(maximum, temp);
    }
    int dishes = ceil(float(maximum)/k);
    int total = dishes * k * number;
    cout<<total-n<<endl;
}
