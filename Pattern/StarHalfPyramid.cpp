#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter the Number of Rows: ";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
			cout<<" *";
		cout<<endl;
	}
	return 0;
}
