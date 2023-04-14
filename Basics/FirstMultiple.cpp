#include<iostream>
using namespace std;
int main()
{
	int i=2;
	for(;i>0;i++)
	{
		if(i%5==0 && i%7==0)
			break;
	}
	cout<<"First Multiple of 5 & 7 is: "<<i;
	return 0;
}
