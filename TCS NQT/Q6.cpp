#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=1;
	cout<<"Enter the Value of N: ";
	cin>>n;//1234
	while(n>0)
	{
		sum*=(n%10);//4 12 24 24
		n=n/10;//123 12 1 0
	}
	cout<<"The Price is: "<<sum;//24
	return 0;
}
