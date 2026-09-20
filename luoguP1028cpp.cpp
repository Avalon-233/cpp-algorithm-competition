#include<bits/stdc++.h>
using namespace std;

int dp[1005]; 

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		dp[i]=1;
		for(int j=i/2;j>0;j--)dp[i]+=dp[j];
	}
	cout<<dp[n];
	return 0;
}
