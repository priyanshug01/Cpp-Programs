#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	int c=a;
	a=b;
	b=c;
	cout<<"Swapped Numbers are: "<<endl;
	cout<<"1st Number: "<<a<<endl;
	cout<<"2nd Number: "<<b;
	return 0;
}
