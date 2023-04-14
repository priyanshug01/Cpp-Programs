#include<iostream>
using namespace std;
int main()
{
	int n,a=0;
	cout<<"Enter the Number: ";
	cin>>n;
	while(n!=0)
	{
		n=n/10;
		a++;
	}
	cout<<"Number of Digits: "<<a;
	return 0;
}
