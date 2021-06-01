#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int d,G;
int p[10],c[10];
int dp[1001];
main()
{
	cin>>d>>G;
	for(int i=0;i<d;i++)cin>>p[i]>>c[i];
	for(int i=0;i<d;i++)
	{
		for(int k=1000;k>=1;k--)
		{
			for(int j=1;j<=p[i]&&j<=k;j++)
			{
				dp[k]=max(dp[k],dp[k-j]+(i+1)*100*j+(j==p[i]?c[i]:0));
			}
		}
	}
	for(int i=0;i<=1000;i++)
	{
		if(dp[i]>=G)
		{
			cout<<i<<endl;
			return 0;
		}
	}
}
