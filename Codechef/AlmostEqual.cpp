#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2 == 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0; i<2*n; i++)
            cout<<(i<n?i+i+i%2:(i-n)*2+i%2)+1<<" ";
    }
}
