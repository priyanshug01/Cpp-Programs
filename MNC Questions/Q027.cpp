#include<bits/stdc++.h>
using namespace std;
bool is_Automorphic(int n)
{
	int sq=n*n;//5776
	while(n>0)
	{
		if(n%10 != sq%10)//false false
			return false;
		n=n/10;//7 0
		sq=sq/10;//577 57
	}
	return true;
}
int main()
{
	int num;
	cout<<"Enter the Number: ";
	cin>>num;//76
	if(is_Automorphic(num))//1
		cout<<"It is an Automorphic Number!";
	else
		cout<<"It is not an Automorphic Number!";
	return 0;
}
