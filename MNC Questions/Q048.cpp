#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,i,fact=1;
	cout<<"Enter the No. of Peoples: ";
	cin>>n;
	cout<<"Enter the Seats in Theatre: ";
	cin>>r;
	for(i=n;i>=r;i--)
		fact*=i;
	cout<<"Possible Outcomes: "<<fact;
	return 0;
}
