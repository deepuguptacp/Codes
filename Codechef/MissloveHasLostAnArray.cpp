#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n, l, r, min, max;
    cin>>n>>l>>r;
    min=pow(2,l)-1+n-l;
	max=pow(2,r)-1+(n-r)*pow(2,r-1);
	cout<<min<<" "<<max;

    return 0;
}
// cout<<(n-l + (int)pow(2,l)-1)<<" "<<( (n-r)*((int)pow(2,r-1)) + (int)pow(2,r)-1 )<<"\n"; 