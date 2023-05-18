#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cout<<"Enter the Number of Candies Available: ";
	cin>>n;//10
	cout<<"Enter the Number of Minimum Candies that must be Inside Jar: ";
	cin>>k;//3
	if(k>n)
	{
		cout<<"Invalid Input!";
		return 0;
	}
	cout<<"Number of Candies Sold: "<<k<<endl;//3
	cout<<"Number of Candies Available: "<<n-k;//7
}
