#include<bits/stdc++.h>
using namespace std;
int count(int n)//5, 10
{
	int i,c=0;
	for(i=0;n>0;i++)//0, 0 1
	{
		c++;//1, 1 2
		n=n/10;//0, 1 0
	}
	return c;
}
int main()
{
	int m,n,i,j;
	cout<<"Enter the Minimum Value: ";
	cin>>m;//5
	cout<<"Enter the Maximum Value: ";
	cin>>n;//10
	int c1=count(m),c2=count(n);//1,2
	for(i=m;i<=n;i++)//5 6 7 8 9 10
	{
		if(count(i)>c1)//f f f f f t
			c1++;//2
		for(j=0;j<c2-c1;j++)//0 0 0 0 0
			cout<<"0";//0 0 0 0 0
		cout<<i<<" ";//5 6 7 8 9 10
	}
	return 0;
}
