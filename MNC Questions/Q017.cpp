#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,rev=0,last;
	cout<<"Enter the Number: ";
	cin>>num;//234
	while(num!=0)
	{
		last=num%10;//4 3 2
		rev=(rev*10)+last;//4 43 432
		num=num/10;//23 2 0
	}
	cout<<"Reversed Number is: "<<rev;//432
	return 0;
}
