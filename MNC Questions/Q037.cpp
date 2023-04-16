#include<bits/stdc++.h>
using namespace std;
int bin_to_dec(int n)
{
	int i,rem,dec_num=0;
	for(i=0;n!=0;i++)//0 1 2 3
	{
		rem=n%10;//1 0 0 1
		dec_num+=rem*pow(2,i);//1 1 1 9
		n=n/10;//100 10 1 0
	}
	return dec_num;//9
}
int main()
{
	int num;
	cout<<"Enter the Binary Number: ";
	cin>>num;//1001
	cout<<"Decimal Number: "<<bin_to_dec(num);//9
	return 0;
}
