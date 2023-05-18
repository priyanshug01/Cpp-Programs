#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the Value of N: ";
	cin>>n;//7
	vector<int> a(n);
	cout<<"Enter the Numbers: ";
	for(i=0;i<n;i++)
		cin>>a[i];//1 0 2 0 1 0 2
	sort(a.begin(),a.end());//0 0 0 1 1 2 2
	cout<<"Sorted Array: ";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";//0 0 0 1 1 2 2
	return 0;
}
