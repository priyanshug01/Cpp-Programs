#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=1;
	cout<<"Enter the Value of N: ";
	cin>>n;
	while(n>0)
	{
		sum*=(n%10);
		n=n/10;
	}
	cout<<"The Price is: "<<sum;
	return 0;
}
