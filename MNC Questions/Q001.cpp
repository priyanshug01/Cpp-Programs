#include<bits/stdc++.h>
using namespace std;

bool is_vowel(char c)
{
	if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
		return true;//1
	return false;
}

int main()
{
	char c;
	cout<<"Enter the Character: ";
	cin>>c;//e
	if(is_vowel(c))//true
		cout<<"It is a Vowel!";
	else
		cout<<"It is a Consonant!";
	return 0;
}
