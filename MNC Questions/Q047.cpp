#include<bits/stdc++.h>
using namespace std;
int main()
{
	int month,year;
	cout<<"Enter the Month: ";
	cin>>month;
	cout<<"Enter the Year: ";
	cin>>year;
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
			cout<<"No. of Days: 31";
	else if(month==4 || month==6 || month==9 || month==11)
			cout<<"No. of Days: 30";
	else if(month==2)
	{
		if((year%4==0 && year%100!=0) || year%400==0)
			cout<<"No. of Days: 29";
		else
			cout<<"No. of Days: 28";
	}
	else
		cout<<"Enter Valid Month!";
	return 0;
}
