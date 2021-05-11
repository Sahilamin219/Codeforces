#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;

	int calories[1005][1005];
	int dp1[1005][1005]={0};
	int dp2[1005][1005]={0};
	int dp3[1005][1005]={0};
	int dp4[1005][1005]={0};

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
			cin>>calories[i][j];
	}

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
			dp1[i][j]=max(dp1[i-1][j],dp1[i][j-1])+calories[i][j];
	}

	for(int i=m;i>=1;i--)
	{
		for(int j=n;j>=1;j--)
			dp2[i][j]=max(dp2[i+1][j],dp2[i][j+1])+calories[i][j];
	}

	for(int i=m;i>=1;i--)
	{
		for(int j=1;j<=n;j++)
			dp3[i][j]=max(dp3[i+1][j],dp3[i][j-1])+calories[i][j];
	}

	for(int i=1;i<=m;i++)
	{
		for(int j=n;j>=1;j--)
			dp4[i][j]=max(dp4[i-1][j],dp4[i][j+1])+calories[i][j];
	}

	int ans=0;
	for(int i=2;i<m;i++)
	{
		for(int j=2;j<n;j++)
		{
			int ans1=dp1[i-1][j]+dp2[i+1][j]+dp3[i][j-1]+dp4[i][j+1];
			int ans2=dp1[i][j-1]+dp2[i][j+1]+dp3[i+1][j]+dp4[i-1][j];

			ans=max(ans,max(ans1,ans2));
		}
	}

	cout<<ans;
	return 0;
}