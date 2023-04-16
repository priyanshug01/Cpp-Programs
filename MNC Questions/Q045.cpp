#include<bits/stdc++.h>
using namespace std;
int neon(int n)
{
	int rem,sum=0;
	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	return sum;
}
int main()
{
	int num;
	cout<<"Enter the Number: ";
	cin>>num;
	if(num==neon(num*num))
		cout<<"It is a Neon Number!";
	else
		cout<<"It is not a Neon Number!";
	return 0;
}
