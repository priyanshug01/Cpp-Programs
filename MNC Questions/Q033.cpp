#include<bits/stdc++.h>
using namespace std;
bool is_Prime(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int i,low,upp;
	cout<<"Enter the Lower Limit(>1): ";
	cin>>low;
	cout<<"Enter the Upper Limit: ";
	cin>>upp;
	cout<<"Prime Numbers: ";
	for(i=low;i<=upp;i++)
	{
		if(is_Prime(i))
			cout<<i<<" ";
	}
	return 0;
}
