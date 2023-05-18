#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string day;
	cout<<"Enter the Day: ";
	cin>>day;//Monday
	cout<<"Enter the No. of Days: ";
	cin>>n;//13
	if(day=="Monday")
		n-=6;//7
	else if(day=="Tuesday")
		n-=5;
	else if(day=="Wednesday")
		n-=4;
	else if(day=="Thursday")
		n-=3;
	else if(day=="Friday")
		n-=2;
	else if(day=="Saturday")
		n-=1;
	if(n>=0)
		cout<<"Number of Sundays: "<<n/7+1;//2
	else
		cout<<"Number of Sundays: "<<n/7;
	return 0;
}
