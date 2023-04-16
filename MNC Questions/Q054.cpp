#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter the No. of Rows: ";
	cin>>r;
	cout<<"Enter the No. of Columns: ";
	cin>>c;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==0 || j==0 || i==r-1 || j==c-1)
				cout<<" *";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
