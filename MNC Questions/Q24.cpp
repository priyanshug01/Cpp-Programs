#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	int i,sum=1;
	for(i=1;i<=n;i++)
		sum*=i;
	return sum;//120 24 1
}
int main()
{
	int i,num,rem,sum=0;
	cout<<"Enter the Number: ";
	cin>>num;//145
	int n=num;//145
	while(n!=0)
	{
		rem=n%10;//5 4 1
		sum+=fact(rem);//120 144 145
		n=n/10;//14 1 0
	}
	if(num==sum)//true
		cout<<"It is a Strong Number!";
	else
		cout<<"It is not a Strong Number!";
	return 0;
}
