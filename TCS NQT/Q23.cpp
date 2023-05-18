#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the Number: ";
	cin>>n;//10
	int a[n];
	for(i=0;i<n;i++)//0 1 2 3 4 5 6 7 8 9
	{
		if(i%2==0)//t f t f t f t f t f
			a[i]=i*7;//a[0]=0 a[2]=7 a[4]=14 a[6]=21 a[8]=28
		else//f t f t f t f t f t
			a[i]=(i-1)*6;//a[1]=0 a[3]=6 a[5]=12 a[7]=18 a[9]=24
	}
	cout<<"The Series is: ";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";//0 0 7 6 14 12 21 18 28 24
	return 0;
}
