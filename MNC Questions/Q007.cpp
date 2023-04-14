#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num1,num2;
	cout<<"Enter Number1: ";
	cin>>num1;//10
	cout<<"Enter Number2: ";
	cin>>num2;//30
	num1=num1+num2;//40
	num2=num1-num2;//10
	num1=num1-num2;//30
	cout<<"Swapped Numbers are- Number1: "<<num1<<" Number2: "<<num2;
	return 0;
}
