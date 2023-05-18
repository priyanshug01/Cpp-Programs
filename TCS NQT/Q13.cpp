#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,i,j;
	cout<<"Enter the Number of Rows: ";
	cin>>m;//5
	cout<<"Enter the Number of Columns: ";
	cin>>n;//5
	int a[m][n];
	a[0][0]=0;
	for(i=1;i<m;i++)//1 2 3 4
	{
		a[i][0]=1;//a[1][0]=1, a[2][0]=1, a[3][0]=1, a[4][0]=1
		for(j=1;j<n;j++)//1 2 3 4
		{
			a[0][j]=1;//a[0][1]=1, a[0][2]=1, a[0][3]=1, a[0][4]=1 ...
			a[i][j]=a[i-1][j]+a[i][j-1];//a[1][1]=1+1=2 ...
		}
	}
	cout<<"Total Number of Ways: "<<a[m-1][n-1];//a[4][4]=70
	return 0;
}
