#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,num,sum=0;
	cout<<"Enter the Number: ";
	cin>>num;//25
	cout<<"Factors are: ";
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			cout<<i<<" ";//1 5 25
	}
	return 0;
}
