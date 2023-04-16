#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter the No. of Rows: ";
	cin>>r;
	for(i=0;i<r;i++)
	{
		for(j=r;j>i;j--)
			cout<<"  ";
		for(j=0;j<=i;j++)
			cout<<" "<<j+1;
		for(j=i;j>0;j--)
			cout<<" "<<j;
		cout<<endl;
	}
	return 0;
}
