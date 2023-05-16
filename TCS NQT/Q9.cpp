#include<bits/stdc++.h>
using namespace std;
int main()
{
	char n[4];
	int i,num=0,a;
	cout<<"Enter the Number: ";
	cin>>n;
	int len=strlen(n);
	for (i=0;n[i]!='\0';i++)
    {
        len--;
        if(n[i]>='0' && n[i]<='9')
            a=n[i]-48;
        else if(n[i]>='A' && n[i]<='G')
            a=n[i]-55;
        else
        {
        	cout<<"Invalid Number!";
        	return 0;
		}
        num+=a*pow(17,len);
    }
    cout<<"Decimal Value: "<<num;
    return 0;
}
