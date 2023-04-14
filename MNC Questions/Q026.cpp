#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,num1,num2,sum1=0,sum2=0;
	cout<<"Enter the Number1: ";
	cin>>num1;//220
	cout<<"Enter the Number2: ";
	cin>>num2;//284
	for(i=1;i<num1;i++)
	{
		if(num1%i==0)
			sum1+=i;//1 3 7 12 22 33 53 75 119 174 284
	}
	for(i=1;i<num2;i++)
	{
		if(num2%i==0)
			sum2+=i;//1 3 7 78 220
	}
	if(num1==sum2 && num2==sum1)//true
		cout<<"They are Amicable Pairs!";
	else
		cout<<"They are not Amicable Pairs!";
	return 0;
}
