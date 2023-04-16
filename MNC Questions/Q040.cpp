#include<bits/stdc++.h>
using namespace std;
int oct_to_dec(int n)
{
	int i,rem,dec_num=0;
	for(i=0;n!=0;i++)//0 1
	{
		rem=n%10;//1 1
		dec_num+=rem*pow(8,i);//1 9
		n=n/10;//1 0
	}
	return dec_num;//9
}
int main()
{
	int num;
	cout<<"Enter the Octal Number: ";
	cin>>num;//11
	cout<<"Decimal Number: "<<oct_to_dec(num);//9
	return 0;
}
