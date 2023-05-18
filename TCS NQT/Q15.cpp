#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cout<<"Enter the Number of Candies: ";
	cin>>n;//10
	cout<<"Enter the Number of Children: ";
	cin>>k;//3
	int a[k]={0},i=0,cd=1;;
	while(n>0)//0 1 2 0
	{
		if(cd>=n)
			cd=n;
		a[i]=a[i]+cd;//a[0]=1 a[1]=2 a[2]=3 a[0]=5
		n=n-cd++;//9 7 4 0
		i++;
		if(i==k)
			i=0;
	}
	cout<<"Number of Candies Children Get: ";
	for(i=0;i<k;i++)
		cout<<a[i]<<" ";//5 2 3
	return 0;
}
