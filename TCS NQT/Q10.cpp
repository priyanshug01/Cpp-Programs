#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[16][10]={"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
	char b[20];
	int i,flag=0;
	cout<<"Enter the Word: ";
	cin>>b;
	for(i=0;i<16;i++)
	{
		if(strcmp(a[i],b)==0)
			flag=1;
	}
	if(flag==1)
		cout<<"It is a Keyword!";
	else
		cout<<"It is not a Keyword!";
}
