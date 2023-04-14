#include<iostream>
using namespace std;
int main()
{
	int i=1,n,sum=0;
	cout<<"Enter a Number: ";
	cin>>n;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	cout<<"Sum of Numbers: "<<sum;
	return 0;
}
