#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
	int rem,sum=0;
	while(n!=0)
	{
		rem=n%10;//3 1
		sum=(sum*10)+rem;//1 13
		n=n/10;//3 0
	}
	return sum;//13
}
int bin_to_dec(int n)
{
	int i,rem,dec_num=0;
	for(i=0;n!=0;i++)//0 1 2 3
	{
		rem=n%10;//1 0 1 1
		dec_num+=rem*pow(2,i);//1 3 3 11
		n=n/10;//101 10 1 0
	}
	return dec_num;//11
}
int dec_to_oct(int n)
{
	int i,rem,oct_num=0;
	for(i=0;n!=0;i++)//0 1
	{
		rem=n%8;//3 1
		oct_num=(oct_num*10)+rem;//3 31
		n=n/10;//1 0
	}
	return oct_num;//31
}
int main()
{
	int num;
	cout<<"Enter the Binary Number: ";
	cin>>num;//1011
	if(bin_to_dec(num)%8==0)
		cout<<"Octal Number: "<<bin_to_dec(num)/8<<"0";
	else
		cout<<"Octal Number: "<<rev(dec_to_oct(bin_to_dec(num)));//13
	return 0;
}
