#include<iostream>
using namespace std;
int main()
{
	int n,i,a,sum=0;
	cout<<"Enter the Number: ";
	cin>>n;
	for(i=0;n!=0;i++)
	{
		a=n%10;
		sum+=a;
		n=n/10;
	}
	cout<<"Sum of Digits is: "<<sum;
	return 0;
}
