#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=0,y=0,n,i;
	cout<<"Enter the Number of Turns: ";
	cin>>n;//5
	for(i=1;i<=n;i++)//1 2 3 4 5
	{
		if(i%4==1)
			x+=(i*10);//10, 30
		else if(i%4==2)
			y+=(i*10);//20
		else if(i%4==3)
			x-=(i*10);//-20
		else
			y-=(i*10);//-20
	}
	cout<<"The Position is: "<<x<<" "<<y;//30,-20
	return 0;
}
