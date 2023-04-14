#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c;
	cout<<"Enter the Character: ";
	cin>>c;//l
	if(c>='a' && c<='z')//true
		cout<<"The Character is in Lowercase!";
	else if(c>='A' && c<='Z')
		cout<<"The Character is in Uppercase!";
	else
		cout<<"The Character is a Special Symbol!";
	return 0;
}
