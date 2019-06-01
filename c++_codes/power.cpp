#include<iostream>
using namespace std;
int power(int, int);
int main(){
	int a, b;
	cout<<"Enter the base : ";
	cin>>a;
	cout<<"Enter the power : ";
	cin>>b;
	cout<<power(a, b)<<"\n";
}
int power(int p, int q){
	if(q==1)
		return p;
	else 
		return p*power(p, q-1);
}
