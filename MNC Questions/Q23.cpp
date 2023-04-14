#include<bits/stdc++.h>
using namespace std;
int power(int n)
{
	return n*n*n;//27 125 1
}
int main()
{
	int i,num,rem,sum=0;
	cout<<"Enter the Number: ";
	cin>>num;//153
	int n=num;//153
	while(n!=0)
	{
		rem=n%10;//3 5 1
		sum+=power(rem);//27 152 153
		n=n/10;//15 1 0
	}
	if(num==sum)//true
		cout<<"It is an Armstrong Number!";
	else
		cout<<"It is not an Armstrong Number!";
	return 0;
}
