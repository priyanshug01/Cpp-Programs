#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,fact=1,i;
	cout<<"Enter the Starting Number: ";
	cin>>num;//5
	for(i=num;i>0;i--)
		fact*=i;//5 20 60 120 120
	cout<<"Factorial is: "<<fact;//120
	return 0;
}
