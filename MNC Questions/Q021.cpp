#include<bits/stdc++.h>
using namespace std;
bool is_Prime(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int num;
	cout<<"Enter the Number: ";
	cin>>num;
	if(is_Prime(num))
		cout<<"It is a Prime Number!";
	else
		cout<<"It is not a Prime Number!";
	return 0;
}
