#include<bits/stdc++.h>
using namespace std;
int main()
{
	char n[4];
	int i,num=0,a;
	cout<<"Enter the Number: ";
	cin>>n;//23GF
	int len=strlen(n);//4
	for (i=0;n[i]!='\0';i++)
    {
        len--;//3 2 1 0
        if(n[i]>='0' && n[i]<='9')
            a=n[i]-48;//50-48=2 51-48=3 
        else if(n[i]>='A' && n[i]<='G')
            a=n[i]-55;//71-55=16 70-55=15
        else
        {
        	cout<<"Invalid Number!";
        	return 0;
		}
        num+=a*pow(17,len);//9826 9826+857=10693 10693+272=10965 10965+15=10980
    }
    cout<<"Decimal Value: "<<num;//10980
    return 0;
}
