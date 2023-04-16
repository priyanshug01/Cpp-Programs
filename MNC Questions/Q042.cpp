#include<bits/stdc++.h>
using namespace std;
int dec_to_bin(int n)
{
	int i,rem,bin_num=0;
	for(i=0;n!=0;i++)//0 1 2
	{
		rem=n%2;//0 0 0 1
		bin_num+=rem*pow(10,i);//0 0 0 1000
		n=n/2;//4 2 1 0
	}
	return bin_num;//1000
}
int oct_to_dec(int n)
{
	int i,rem,dec_num=0;
	for(i=0;n!=0;i++)//0 1
	{
		rem=n%10;//0 1
		dec_num+=rem*pow(8,i);//0 8
		n=n/10;//1 0
	}
	return dec_num;//8
}
int main()
{
	int num;
	cout<<"Enter the Octal Number: ";
	cin>>num;//10
	cout<<"Binary Number: "<<dec_to_bin(oct_to_dec(num));//1000
	return 0;
}
