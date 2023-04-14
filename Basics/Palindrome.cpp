#include<iostream>
using namespace std;
int main()
{
	int n,i,a,sum=0;
	cout<<"Enter the Number: ";
	cin>>n;
	int n1=n;
	for(i=0;n!=0;i++)
	{
		a=n%10;
		sum=(sum*10)+a;
		n=n/10;
	}
	if(sum==n1)
		cout<<"It is a Palindrome Number";
	else 
		cout<<"It is Not a Palindrome Number";
	return 0;
}
