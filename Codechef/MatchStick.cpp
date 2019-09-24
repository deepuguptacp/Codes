//https://www.codechef.com/submit/MATCHES
#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t, temp;
	int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	cin>>t;
	while(t--){
	    ll A, B, result=0;
	    cin>>A>>B;
	    ll sum = A+B;
	    while(sum!=0){
	        temp = sum % 10;
	        //cout<<temp<<endl;
	        result += arr[temp];
	        sum /= 10;
	    }
	    cout<<result<<endl;
	}
	return 0;
}
