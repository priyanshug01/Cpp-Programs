#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
	int last,rev=0;
	while(n!=0)
	{
		last=n%10;//5 6 5
		rev=(rev*10)+last;//5 56 565
		n=n/10;//56 5 0
	}
	return rev;//565
}
int main()
{
	int num;
	cout<<"Enter the Number: ";
	cin>>num;//565
	if(num==rev(num))//true
		cout<<"It is a Palindrome Number!";
	else
		cout<<"It is not a Palindrome Number!";
	return 0;
}
