#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,a=0;
	cout<<"Enter the Number of Rows: ";
	cin>>r;
	cout<<"Enter the Number of Columns: ";
	cin>>c;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if((i+j)%2==0)
				cout<<" 0";
			else	
				cout<<" 1";
		}
		cout<<endl;
	}
	return 0;
}
