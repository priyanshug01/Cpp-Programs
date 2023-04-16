#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter the No. of Rows: ";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		for(j=r;j>=i;j--)
			cout<<"  ";
		for(j=1;j<=(2*i-1);j++)
			cout<<" *";
		cout<<endl;
	}
	return 0;
}
