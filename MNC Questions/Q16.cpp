#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num1,num2,sum=0,i;
	cout<<"Enter the Starting Number: ";
	cin>>num1;//3
	cout<<"Enter the Ending Number: ";
	cin>>num2;//7
	for(i=num1;i<=num2;i++)
		sum+=i;//3 7 12 18 25
	cout<<"Sum of the Numbers is: "<<sum;//25
	return 0;
}
