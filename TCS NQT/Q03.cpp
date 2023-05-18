#include<bits/stdc++.h>
using namespace std;
void print(int count,int no)
{
	int i;
	for(i=0;i<count;i++)	
		cout<<no<<" ";//0 0 0 1 1 2 2
}
int main()
{
	int i,n,c1=0,c2=0;
	cout<<"Enter the Value of N: ";
	cin>>n;//7
	int a[n];
	cout<<"Enter the Numbers: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];//1 0 2 0 1 0 2
		if(a[i]==0)
			c1++;//1 2 3
		if(a[i]==1)
			c2++;//1 2
	}
	cout<<"Sorted Array: ";
	print(c1,0);//3,0
	print(c2,1);//2,0
	print(n-c1-c2,2);//2,0
	return 0;
}
