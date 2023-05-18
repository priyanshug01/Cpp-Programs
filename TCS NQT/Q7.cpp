#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,r,i,j,max=0,k;
	cout<<"Enter the Number of Trainees: ";
	cin>>t;//3
	cout<<"Enter the Number of Rounds: ";
	cin>>r;//3
	int a[r][t],avg[r];
	cout<<"Enter the Oxygen Levels per Round: ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<t;j++)
			cin>>a[i][j];//95 92 95 92 90 92 90 92 90
	}
	for(i=0;i<t;i++)
	{
		avg[i]=0;
		for(j=0;j<r;j++)
		{
			avg[i]+=a[j][i];//91.75, 91.5, 91.75
			if(avg[i]>max)
			{
				max=avg[i];//91.75
				k=i;//1
			}
		}
	}
	for(i=0;i<t;i++)
	{
		if(avg[i]<70)
			cout<<"Trainee "<<i+1<<" is Unfit!"<<endl;
		else
			cout<<"Trainee "<<i+1<<" is Fit!"<<endl;//1 2 3
	}
	cout<<"Trainee "<<k+1<<" has Highest Oxygen Level!";//1
	return 0;
}
