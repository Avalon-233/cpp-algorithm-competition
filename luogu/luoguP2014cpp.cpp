#include<bits/stdc++.h>
using namespace std;

int n,m;
int s[305],fa[305],dp[305][305];

void dfs(int u)
{
	dp[u][1]=s[u];
	for(int i=1;i<=n;i++)
	    if(fa[i]==u)
	    {
	    	dfs(i);
	    	for(int j=m;j>0;j--)
	    	    for(int k=0;k<j;k++)
	    	        dp[u][j]=max(dp[u][j],dp[u][j-k]+dp[i][k]);
	    	
		}
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>fa[i]>>s[i];
	for(int i=1;i<=n;i++)dp[i][1]=s[i]; 
	m++;
	dfs(0);
	cout<<dp[0][m]; 
	return 0;
}
