#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,num2,i,gcd=1;
	cout<<"Enter Number1: ";
	cin>>num1;//6
	cout<<"Enter Number2: ";
	cin>>num2;//4
	for(i=1;i<=num1 && i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
			gcd=i;
	}
	cout<<"GCD of the Numbers is: "<<gcd;
	return 0;
}
