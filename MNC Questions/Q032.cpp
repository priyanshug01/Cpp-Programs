#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,num1,num2,den1,den2;
	cout<<"Enter the Numerator of Number1: ";
	cin>>num1;//2
	cout<<"Enter the Denominator of Number1: ";
	cin>>den1;//3
	cout<<"Enter the Numerator of Number2: ";
	cin>>num2;//6
	cout<<"Enter the Denominator of Number2: ";
	cin>>den2;//9
	int new_num=((num1*den2)+(num2*den1));//18+18
	int new_den=den1*den2;//27
	for(i=new_num;i>0;i--)
	{
		if(new_num%i==0 && new_den%i==0)
			break;
	}
	cout<<"Numerator of Sum is: "<<new_num/i<<endl;
	cout<<"Denominator of Sum is: "<<new_den/i;
	return 0;
}
