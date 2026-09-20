#include<bits/stdc++.h>
using namespace std;

int mp[105][15],T[105][15];//0±ß½ç 1×êÊ¯ 2±¬Õ¨·¶Î§ 
int ans,N,M,
wx[12]={-2,-1,-1,-1,0,0,0,0,1,1,1,2},
wy[12]={0,-1,0,1,-2,-1,1,2,-1,0,1,0};

bool safe(int x,int y)
{
	bool f=1;
	for(int i=0;i<12;i++)
	    if(T[x+wx[i]][y+wy[i]])f=0; 
	return f;
}

void dfs(int x,int y,int n)
{
	ans=max(ans,n);
	if(y>M)
	{
		y-=M;x++;
	}
	if(x>N)return ;
	if(mp[x][y]==1&&safe(x,y))
	{
		T[x][y]=1;
		dfs(x,y+1,n+1);
		T[x][y]=0;
	}
	dfs(x,y+1,n);
}

int main()
{
	memset(mp,0,sizeof(mp));
	cin>>N>>M;
	for(int i=1;i<=N;i++)
	    for(int j=1;j<=M;j++)
	    {
	    	char ch;
			cin>>ch;
			if(ch=='.')mp[i][j]=1;
		}
	dfs(1,1,0);
	cout<<ans;
	return 0;
}
