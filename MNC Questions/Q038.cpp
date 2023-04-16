#include<bits/stdc++.h>
using namespace std;
int dec_to_bin(int n)
{
	int i,rem,bin_num=0;
	for(i=0;n!=0;i++)//0 1 2
	{
		rem=n%2;//0 1 1
		bin_num+=rem*pow(10,i);//0 10 110
		n=n/2;//3 1 0
	}
	return bin_num;//110
}
int main()
{
	int num;
	cout<<"Enter the Decimal Number: ";
	cin>>num;//6
	cout<<"Binary Number: "<<dec_to_bin(num);//110
	return 0;
}
