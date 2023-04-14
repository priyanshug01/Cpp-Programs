#include<iostream>
using namespace std;
int main()
{
	int num,n,a=0,i=0;
	cout<<"Enter Total Numbers: ";
	cin>>n;
	do
	{
		cin>>num;
		a+=num;
		i++;
	}while(i<n);
	cout<<"Sum of Numbers is: "<<a;
	return 0;
}
