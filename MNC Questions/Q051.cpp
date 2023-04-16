#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,root1,root2,real,imag;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	cout<<"Enter c: ";
	cin>>c;
	double det=(b*b)-(4*a*c);
	if(det>0)
	{
		root1=((-b)+sqrt(det))/(2*a);
		root2=((-b)-sqrt(det))/(2*a);
		cout<<"Roots are: "<<root1<<endl<<root2;
	}
	else if(det==0)
	{
		root1=root2=-b/(2*a);
		cout<<"Roots are: "<<root1<<endl<<root2;
	}
	else
	{
		real=-b/(2*a);
		imag=sqrt(-det)/(2*a);
		cout<<"Roots are: "<<real<<" + "<<imag<<"i"<<endl<<real<<" - "<<imag<<"i";
	}
	
	return 0;
}
