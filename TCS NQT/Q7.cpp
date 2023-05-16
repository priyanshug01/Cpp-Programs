#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,r,i,j,max=0,k;
	cout<<"Enter the Number of Trainees: ";
	cin>>t;
	cout<<"Enter the Number of Rounds: ";
	cin>>r;
	int a[r][t],avg[r];
	cout<<"Enter the Oxygen Levels per Round: ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<t;j++)
			cin>>a[i][j];
	}
	for(i=0;i<t;i++)
	{
		avg[i]=0;
		for(j=0;j<r;j++)
		{
			avg[i]+=a[j][i];
			if(avg[i]>max)
			{
				max=avg[i];
				k=i;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		if(avg[i]<70)
			cout<<"Trainee "<<i+1<<" is Unfit!"<<endl;
		else
			cout<<"Trainee "<<i+1<<" is Fit!"<<endl;
	}
	cout<<"Trainee "<<k+1<<" has Highest Oxygen Level!";
	return 0;
}
