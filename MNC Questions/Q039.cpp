#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
	int rem,sum=0;
	while(n!=0)
	{
		rem=n%10;//1 2
		sum=(sum*10)+rem;//1 12
		n=n/10;//2 0
	}
	return sum;//12
}
int dec_to_oct(int n)
{
	int i,rem,oct_num=0;
	for(i=0;n!=0;i++)//0 1
	{
		rem=n%8;//2 1
		oct_num=(oct_num*10)+rem;//2 21
		n=n/10;//1 0
	}
	return oct_num;//21
}
int main()
{
	int num;
	cout<<"Enter the Decimal Number: ";
	cin>>num;//10
	if(num%8==0)
		cout<<"Octal Number: "<<num/8<<"0";
	else//true
		cout<<"Octal Number: "<<rev(dec_to_oct(num));//12
	return 0;
}
