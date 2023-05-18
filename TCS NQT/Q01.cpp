#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,r,i,j;
	cout<<"Enter the No. of Rock Samples: ";
	cin>>s;//10
	cout<<"Enter the No. of Ranges: ";
	cin>>r;//2
	int arr[s],a[r],b[r];
	cout<<"Enter the Sizes: ";
	for(i=0;i<s;i++)
		cin>>arr[i];//345 604 321 433 704 470 808 718 517 811
	for(i=0;i<r;i++)
	{
		cout<<"Enter the Minimum Size: ";
		cin>>a[i];//300 400
		cout<<"Enter the Maximum Size: ";
		cin>>b[i];//350 700
	}
	cout<<"Number of Samples: ";
	for(i=0;i<r;i++)//0 1
	{
		int count=0;
		for(j=0;j<s;j++)//0 1 2 3 4 5 6 7 8 9, 0 1 2 3 4 5 6 7 8 9
		{
			if(arr[j]>=a[i] && arr[j]<=b[i])//t,f,t,f,f,f,f,f,f,f, f,t,f,t,f,t,f,f,t,f
				count++;//1 2, 1 2 3 4
		}
		cout<<count<<" ";//2 4
	}
	return 0;
}
