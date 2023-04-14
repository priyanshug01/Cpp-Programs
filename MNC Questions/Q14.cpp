#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,sum=0,last;
	cout<<"Enter the Number: ";
	cin>>num;//3456
	while(num!=0)
	{
		last=num%10;//6 5 4 3
		sum+=last;//6 11 15 18
		num=num/10;//345 34 3 0
	}
	cout<<"Sum of Digits is: "<<sum;//18
	return 0;
}
