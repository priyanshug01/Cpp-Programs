#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=0,b=1,c,i,n;
	cout<<"Enter the Limit: ";
	cin>>n;//6
	cout<<"Fibonacci Series is: 0 1 ";
	for(i=1;i<n-1;i++)
	{
		c=a+b;//1 2 3 5
		cout<<c<<" ";
		a=b;//1 1 2 3
		b=c;//1 2 3 5
	}
	return 0;
}
