#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter the Number of Rows: ";
	cin>>r;
	cout<<"Enter the Number of Columns: ";
	cin>>c;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==1 || j==1 || i==r || j==c)
				cout<<" "<<j;
			else
				cout<<"  ";
		}		
		cout<<endl;
	}
	return 0;
}
