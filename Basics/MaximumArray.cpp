#include<iostream>
using namespace std;
int main()
{
	int n,i,a[20],max=0;
	cout<<"Enter Total Numbers: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Number "<<i+1<<": ";
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	cout<<"Maximum Number is: "<<max;
	return 0;
}
