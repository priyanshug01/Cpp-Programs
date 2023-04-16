#include<bits/stdc++.h>
using namespace std;
int no_of_divisors(int n)
{
	int i,t_div=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			t_div++;
	}
	return t_div;
}
int main()
{
	int num,div,i,cnt=0;
	cout<<"Enter the Integer: ";
	cin>>num;
	cout<<"Enter the Divisor: ";
	cin>>div;
	for(i=1;i<=num;i++)
	{
		if(no_of_divisors(i)==div)
			cnt++;
	}
	cout<<"Total Integers: "<<cnt;
	return 0;
}
