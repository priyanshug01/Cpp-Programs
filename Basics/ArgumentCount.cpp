//Run in Terminal
#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	cout<<"You have Entered "<<argc<<" Arguments: ";

	for (int i = 0; i < argc; i++) {
		cout<<argv[i]<<" ";
	}
	return 0;
}

