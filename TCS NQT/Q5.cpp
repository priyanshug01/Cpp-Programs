#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j,max,count=0;
	cout<<"Enter the Value of N: ";
	cin>>n;
	int a[n];
	cout<<"Enter the Numbers: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		max=a[i];
		for(j=0;j<i;j++)
		{
			if(a[j]>max)
			{
				count++;
				break;
			}
		}
	}
	cout<<"Elements Larger than their Prior Elements: "<<n-count;
	return 0;
}
