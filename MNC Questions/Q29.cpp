#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,num,sum=0;
	cout<<"Enter the Number: ";
	cin>>num;//20
	for(i=1;i<num;i++)
	{
		if(num%i==0)
			sum+=i;//1 3 7 12 22
	}
	if(num<sum)//true
		cout<<"It is an Abundant Number!";
	else
		cout<<"It is not an Abundant Number!";
	return 0;
}
