#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter the Number of Rows: ";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r-i;j++)
			cout<<"  ";
		if(i==1 || i==r)
		{
			for(j=1;j<=2*i-1;j++)
				cout<<" "<<i;
		}
		else
		{
			cout<<" "<<i;
			for(j=2;j<2*i-1;j++)
				cout<<"  ";
			cout<<" "<<i;
		}
		cout<<endl;
	}
	return 0;
}
