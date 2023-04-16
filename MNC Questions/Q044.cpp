#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,y;
	cout<<"Enter the Value of x: ";
	cin>>x;
	cout<<"Enter the Value of y: ";
	cin>>y;
	if(x==0 && y!=0)
		cout<<"The Point lies on Y Axis!";
	else if(y==0 && x!=0)
		cout<<"The Point lies on X Axis!";
	else if(x==0 && y==0)
		cout<<"The Point lies on the Origin!";
	else if(x>0 && y>0)
		cout<<"The Point lies on 1st Quadrant!";
	else if(x<0 && y>0)
		cout<<"The Point lies on 2nd Quadrant!";
	else if(x<0 && y<0)
		cout<<"The Point lies on 3rd Quadrant!";
	else
		cout<<"The Point lies on 4th Quadrant!";
	return 0;
}
