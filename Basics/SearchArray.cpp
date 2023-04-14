#include<iostream>
using namespace std;
int main()
{
	int n,i,b,a[20],flag=0;
	cout<<"Enter Total Numbers: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Number "<<i+1<<": ";
		cin>>a[i];
	}
	cout<<"Enter the Number you want to Search: ";
	cin>>b;
	for(i=0;i<n;i++)
	{
		if(b==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"The Number is Found at Position "<<i+1<<"!";
	else
		cout<<"The Number is Not Found!";
	return 0;
}
