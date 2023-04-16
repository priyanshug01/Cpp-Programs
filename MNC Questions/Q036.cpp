#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,num,new_num=0,rem;
	cout<<"Enter the Number: ";
	cin>>num;//1030
	int n=num;//1030
	for(i=0;n!=0;i++)
	{
		rem=n%10;//0 3 0 1
		if(rem==0)
			rem=1;
		new_num+=rem*pow(10,i);//1 11 113 1131
		n=n/10;//103 10 1 0
	}
	cout<<"Edited Number: "<<new_num;//1131
	return 0;
}
