#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter the Number of Rows: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
			cout<<"  ";
		for(j=0;j<(2*i+1);j++)
			cout<<" "<<j;
		cout<<endl;
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=n;j>i;j--)
			cout<<"  ";
		for(j=0;j<(2*i-1);j++)
			cout<<" "<<j;
		cout<<endl;
	}
	return 0;
}
