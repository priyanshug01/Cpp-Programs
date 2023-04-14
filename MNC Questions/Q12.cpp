#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num1,num2,num3;
	cout<<"Enter Number1: ";
	cin>>num1;//3
	cout<<"Enter Number2: ";
	cin>>num2;//2
	cout<<"Enter Number3: ";
	cin>>num3;//4
	int max=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);//4
	cout<<"Maximum Number: "<<max;
	return 0;
}
