#include<bits/stdc++.h>
using namespace std;
int power(int n,int b)
{
	int pow=0;
	while(n!=0)
	{
		if(n%b==0)//true true true true true false
			pow++;//1 2 3 4 5
		n=n/b;//16 8 4 2 1 0
	}
	return pow;
}
int main()
{
	int num,base;
	cout<<"Enter the Number: ";
	cin>>num;//32
	cout<<"Enter the Base Number: ";
	cin>>base;//2
	if(base>1 && pow(base,power(num,base))==num)//true and truw
		cout<<"Power is: "<<power(num,base);
	else
		cout<<"Not Possible!";
	return 0;
}
