#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,num,sum=0;
	cout<<"Enter the Number: ";
	cin>>num;//28
	for(i=1;i<num;i++)
	{
		if(num%i==0)
			sum+=i;//1 3 7 14 28
	}
	if(num==sum)//true
		cout<<"It is a Perfect Number!";
	else
		cout<<"It is not a Perfect Number!";
	return 0;
}
