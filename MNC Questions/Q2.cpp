#include<bits/stdc++.h>
using namespace std;

bool is_alphabet(char c)
{
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
		return true;//1
	return false;
}

int main()
{
	char c;
	cout<<"Enter the Character: ";
	cin>>c;//v
	if(is_alphabet(c))//true
		cout<<"It is an Alphabet!";
	else
		cout<<"It is not an Alphabet!";
	return 0;
}
