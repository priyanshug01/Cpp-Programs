#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,r,n=1;
	cout<<"Enter the Number of Rows: ";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" "<<n;
			n++;
		}
		cout<<endl;
	}
	return 0;
}
