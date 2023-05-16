#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,t,i1,i2,j;
	cout<<"Enter the Loan Amount: ";
	cin>>p;
	cout<<"Enter Total Tenure: ";
	cin>>t;
	cout<<"Enter No. of Interest Slabs of Bank A: ";
	cin>>i1;
	int a1[i1];
	float b1[i1],emi1=0,x1;
	cout<<"Enter the Rates: ";
	for(j=0;j<i1;j++)
		cin>>a1[j]>>b1[j];
	for(j=0;j<i1;j++)
	{
		x1=1-(1/(pow((1+b1[j]),(a1[j]*12))));
		emi1+=(p*b1[j]/x1);
	}
	cout<<"Enter No. of Interest Slabs of Bank B: ";
	cin>>i2;
	int a2[i2];
	float b2[i2],emi2=0,x2;
	cout<<"Enter the Rates: ";
	for(j=0;j<i2;j++)
		cin>>a2[j]>>b2[j];
	for(j=0;j<i2;j++)
	{
		x2=1-(1/(pow((1+b2[j]),(a2[j]*12))));
		emi2+=(p*b2[j]/x2);
	}
	if(emi1>emi2)
		cout<<"Bank B Offers Low Interest!";
	else if(emi1<emi2)
		cout<<"Bank A Offers Low Interest!";
	else
	cout<<"Both Offers Same Interest!";	
	return 0;
}
