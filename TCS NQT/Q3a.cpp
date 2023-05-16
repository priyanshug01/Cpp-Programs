#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the Value of N: ";
	cin>>n;
	vector<int> a(n);
	cout<<"Enter the Numbers: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	cout<<"Sorted Array: ";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
