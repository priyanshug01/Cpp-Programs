#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j,max,count=0;
	cout<<"Enter the Value of N: ";
	cin>>n;//5
	int a[n];
	cout<<"Enter the Numbers: ";
	for(i=0;i<n;i++)
		cin>>a[i];//7 4 8 2 9
	for(i=0;i<n;i++)//0 1 2 3 4
	{
		max=a[i];//7 4 8 2 9
		for(j=0;j<i;j++)//0, 0 1, 0 1 2, 0 1 2 3
		{
			if(a[j]>max)//t, f f, t t t, f f f f
			{
				count++;//1, 2
				break;
			}
		}
	}
	cout<<"Elements Larger than their Prior Elements: "<<n-count;//3
	return 0;
}
