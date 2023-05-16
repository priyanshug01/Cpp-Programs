#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,r,i,j;
	cout<<"Enter the No. of Rock Samples: ";
	cin>>s;
	cout<<"Enter the No. of Ranges: ";
	cin>>r;
	int arr[s],a[r],b[r];
	cout<<"Enter the Sizes: ";
	for(i=0;i<s;i++)
		cin>>arr[i];
	for(i=0;i<r;i++)
	{
		cout<<"Enter the Minimum Size: ";
		cin>>a[i];
		cout<<"Enter the Maximum Size: ";
		cin>>b[i];
	}
	cout<<"Number of Samples: ";
	for(i=0;i<r;i++)
	{
		int count=0;
		for(j=0;j<s;j++)
		{
			if(arr[j]>=a[i] && arr[j]<=b[i])
				count++;
		}
		cout<<count<<" ";
	}
	return 0;
}
