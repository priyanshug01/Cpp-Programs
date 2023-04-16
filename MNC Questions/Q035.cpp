#include<bits/stdc++.h>
using namespace std;
bool is_Prime(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int num,i,flag=0;
	cout<<"Enter the Number: ";
	cin>>num;
	for(i=2;i<=num/2;i++)
	{
		if(is_Prime(i))
		{
			if(is_Prime(num-i))
			{
				cout<<"Possible Outcomes: "<<i<<" + "<<num-i<<endl;
				flag=1;
			}
		}
	}
	if(flag==0)
		cout<<"No Possible Outcomes";
	return 0;
}
