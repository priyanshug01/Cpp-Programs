#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter Number1: ";
	cin>>num1;//5
	cout<<"Enter Number2: ";
	cin>>num2;//4
	int max=(num1>num2)?num1:num2;//5
	while(1)
	{
		if(max%num1==0 && max%num2==0)
		{
			cout<<"LCM of Numbers is: "<<max;//20
			break;
		}
		max++;// 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
	}
	return 0;
}
