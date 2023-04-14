#include<iostream>
using namespace std;
int main()
{
	int n,i,a,b,c,sum=0;
	cout<<"Enter the Number: ";
	cin>>n;
	cout<<"0 1 ";
	a=0;
	b=1;
	for(i=0;i<n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
	return 0;
}
