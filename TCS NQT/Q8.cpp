#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=0,y=0,n,i;
	cout<<"Enter the Number of Turns: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%4==1)
			x+=(i*10);
		else if(i%4==2)
			y+=(i*10);
		else if(i%4==3)
			x-=(i*10);
		else
			y-=(i*10);
	}
	cout<<"The Position is: "<<x<<" "<<y;
	return 0;
}
