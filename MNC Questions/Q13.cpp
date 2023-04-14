#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,count=0;
	cout<<"Enter the Number: ";
	cin>>num;//856
	while(num!=0)
	{
		count++;//1 2 3
		num=num/10;//85 8 0
	}
	cout<<"Number of Digits is: "<<count;//3
	return 0;
}
