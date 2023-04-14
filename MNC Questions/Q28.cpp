#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,rem,sum=0;
	cout<<"Enter the Number: ";
	cin>>num;//156
	int n=num;//156
	while(n!=0)
	{
		rem=n%10;//6 5 1
		sum+=rem;//6 11 12
		n=n/10;//15 1 0
	}
	if(num%sum==0)//true
		cout<<"It is a Harshad Number!";
	else
		cout<<"It is not a Harshad Number!";
	return 0;
}
