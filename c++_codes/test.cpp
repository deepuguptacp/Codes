/*#include<iostream>
inline int max(int x, int y){
    return (x>y)? x: y;
}
using namespace std;
int main(){
    cout<<"\nMax(0, 10) = "<<max(0, 10);
    cout<<"\nMax(100, 10) = "<<max(100, 10);
    cout<<"\nMax(10, 1010) = "<<max(10, 1010);
    return 0;
}*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n, i, j;
    cin>>n;
    char p[n][10000];
    for(i=0; i<n; i++){
        cin>>p[i];
    }
    int m;
    cin>>m;
    char q[m][10000];
    for(i=0; i<m; i++){
        cin>>q[i];
    }
    int a[m], d;
    for(i=0; i<m; i++){
        a[i]=0;
        for(j=0; j<n; j++){
            if(strcmp(p[j], q[i])==0)
                a[i]++;
        }
    }
    for(i=0; i<m; i++)
        cout<<a[i]<<"\n";
    return 0;
}