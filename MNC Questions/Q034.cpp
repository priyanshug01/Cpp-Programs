#include<bits/stdc++.h>
using namespace std;
int power(int n)
{
	return n*n*n;
}
bool is_Armstrong(int n)
{
	int rem,sum=0,num=n;
	while(n!=0)
	{
		rem=n%10;//3 5 1
		sum+=power(rem);//27 152 153
		n=n/10;//15 1 0
	}
	if(num==sum)
		return true;
	return false;
}
int main()
{
	int i,low,upp;
	cout<<"Enter the Lower Limit: ";
	cin>>low;//1
	cout<<"Enter the Upper Limit: ";
	cin>>upp;//153
	cout<<"Armstrong Number: ";
	for(i=low;i<=upp;i++)//1 2...152 153
	{
		if(is_Armstrong(i))//true false...false true
			cout<<i<<" ";//1 153
	}
	return 0;
}
