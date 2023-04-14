#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,sum=0,i;
	cout<<"Enter the Ending Number: ";
	cin>>num;//4
	for(i=1;i<=num;i++)
		sum+=i;//1 3 6 10
	cout<<"Sum of Natural Numbers is: "<<sum;//10
	return 0;
}
