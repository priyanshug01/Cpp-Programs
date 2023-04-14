#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,sum=0,a,b;
	cout<<"Enter the Binary Number: ";
	cin>>n;
	for(i=0;n!=0;i++)
	{
		a=n%10;
		b=a*pow(2,i);
		sum+=b;
		n=n/10;
	}
	cout<<"Decimal Number: "<<sum;
	return 0;
}
