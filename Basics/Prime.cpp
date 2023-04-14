#include<iostream>
using namespace std;
int main()
{
	int n,i,a,flag=0;
	cout<<"Enter the Number: ";
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"It is a Prime Number!";
	else
		cout<<"It is Not a Prime Number!";
	return 0;
}
