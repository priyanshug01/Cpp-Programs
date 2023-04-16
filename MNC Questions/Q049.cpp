#include<bits/stdc++.h>
using namespace std;
int three_count(int n)
{
	int rem,cnt=0;
	while(n!=0)
	{
		rem=n%10;
		if(rem==3)
			cnt++;
		n=n/10;
	}
	return cnt;
}
int main()
{
	int num,i,count=0;
	cout<<"Enter the Upper Limit: ";
	cin>>num;
	for(i=0;i<=num;i++)
		count+=three_count(i);	
	cout<<"Total No. of Three's: "<<count;
	return 0;
}
