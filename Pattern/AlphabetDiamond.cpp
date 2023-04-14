#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	char c;
	cout<<"Enter the Number of Rows: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		c='A';
		for(j=n-1;j>i;j--)
			cout<<"  ";
		for(j=0;j<(2*i+1);j++)
		{
			cout<<" "<<c;
			c++;
		}
		cout<<endl;
	}
	for(i=n-1;i>=0;i--)
	{
		c='A';
		for(j=n;j>i;j--)
			cout<<"  ";
		for(j=(2*i-1);j>0;j--)
		{
			cout<<" "<<c;
			c++;
		}
		cout<<endl;
	}
	return 0;
}
