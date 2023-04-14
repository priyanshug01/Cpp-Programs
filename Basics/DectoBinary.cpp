#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0,a,pow=1;
	cout<<"Enter the Decimal Number: ";
	cin>>n;
	for(i=0;n!=0;i++)
	{
		a=n%2;
		sum+=a*pow;
		pow*=10;
		n=n/2;
	}
	cout<<"Binary Number: "<<sum;
	return 0;
}
