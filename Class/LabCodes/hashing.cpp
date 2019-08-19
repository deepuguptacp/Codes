// Program using hashing
#include<iostream>
#include<vector>
using namespace std;
int hash(int n)
{
	int temp=n;
	int sum=0;
	while(temp!=0)
	{
	int k=temp%10;
	sum+=k;
	temp/=10;
	}
	return sum;
}
string search(vector<int> v[],int n)
{
	int temp=hash(n);
	vector<int> ::iterator it=v[temp].begin();
	while(it!=v[temp].end())
	{
		if(*it==n)
	     return "Element found ";
	     it++;
	}
	return "Not Found ";
}
int main()
{
 int n;
 cout<<"Enter the number of elements u want to insert ";
 cin>>n;
 vector<int> vec[100];
 cout<<"Enter the values in the array ";
 for(int i=0;i<n;i++)
 {
 	int val;
 	cin>>val;
 	int temp=hash(val);
 	vec[temp].push_back(val);

 }
 cout<<"Enter the element to be searched ";
 int e;
 cin>>e;
 cout<<search(vec,e);

}
