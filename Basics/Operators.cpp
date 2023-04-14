#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	cout<<"Addition: "<<a+b<<endl;
	cout<<"Subtraction: "<<a-b<<endl;
	cout<<"Multiplication: "<<a*b<<endl;
	cout<<"Division: "<<a/b<<endl;
	cout<<"Remainder: "<<a%b<<endl;
	cout<<"Pre-Increment: "<<++a<<endl;
	cout<<"Pre-Decrement: "<<--a<<endl;
	cout<<"Post-Increment: "<<a++<<endl;
	cout<<"Post-Decrement: "<<a--<<endl;
	cout<<"Final Value: "<<a<<endl;
	return 0;
}
