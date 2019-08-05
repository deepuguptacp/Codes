#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, i, flag=0;
    cin>>n;
    int a[n], b[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
        cin>>b[i];
    sort(a, a+n);
    sort(b, b+n);
    for(i=0; i<n; i++){
        if(a[i]==b[i])
            flag=1;
        else
            flag=0;
    }
    if(flag== 1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}