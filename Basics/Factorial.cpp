#include<iostream>
using namespace std;
int main()
{
	int n,i,a,sum=0;
	cout<<"Enter the Number: ";
	cin>>n;
	if(n==0)
	{
		cout<<"Factorial is: 1";
		return 0;
	}
	for(i=n-1;i>0;i--)
		n=n*i;
	cout<<"Factorial is: "<<n;
	return 0;
}
