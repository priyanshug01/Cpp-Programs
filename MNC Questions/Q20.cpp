#include<bits/stdc++.h>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the Year: ";
	cin>>year;//1900
	if((year%4==0 && year%100!=0) || year%400==0)//(true and false) or false
		cout<<"It is a Leap Year!";
	else
		cout<<"It is not a Leap Year!";
	return 0;
}
