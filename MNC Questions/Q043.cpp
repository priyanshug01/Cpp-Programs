#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,per,total_hs=0;
	cout<<"Enter Total No. of Persons: ";
	cin>>per;
	for(i=per-1;i>0;i--)
		total_hs+=i;
	cout<<"Total No. of Handshakes: "<<total_hs;
	return 0;
}
