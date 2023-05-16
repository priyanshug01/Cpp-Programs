#include<bits/stdc++.h>
using namespace std;
void print(int count,int no)
{
	int i;
	for(i=0;i<count;i++)	
		cout<<no<<" ";
}
int main()
{
	int i,n,c1=0,c2=0;
	cout<<"Enter the Value of N: ";
	cin>>n;
	int a[n];
	cout<<"Enter the Numbers: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
			c1++;
		if(a[i]==1)
			c2++;
	}
	cout<<"Sorted Array: ";
	print(c1,0);
	print(c2,1);
	print(n-c1-c2,2);
	return 0;
}
