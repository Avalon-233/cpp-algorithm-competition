#include<bits/stdc++.h>
using namespace std;

int a[25][25]; 
int n,m;
bool pass[25][25];
pair<int,int> pos;

bool safe()
{
	if(pos.first==0||pos.first==m||pos.second==0||pos.second==n||pass[pos.second][pos.first])return false;
	else return true;
}

int main()
{
	int num=1; 
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	    for(int j=1;j<=m;j++)cin>>a[i][j];
	pos.first=1;pos.second=1;
	cout<<a[1][1]<<" ";
	pass[1][1]=1;
	while(num<n*m)
	{
		while(pos.first+1<=m&&pass[pos.second][pos.first+1]==0)
		{
			num++;
			cout<<a[pos.second][++pos.first]<<" ";
			pass[pos.second][pos.first]=1;
		}
		while(pos.second+1<=n&&pass[pos.second+1][pos.first]==0)
		{
			num++;
			cout<<a[++pos.second][pos.first]<<" ";
			pass[pos.second][pos.first]=1;
		}
		while(pos.first-1>=1&&pass[pos.second][pos.first-1]==0)
		{
			num++;
			cout<<a[pos.second][--pos.first]<<" ";
			pass[pos.second][pos.first]=1;
		}
		while(pos.second-1>=1&&pass[pos.second-1][pos.first]==0)
		{
			num++;
			cout<<a[--pos.second][pos.first]<<" ";
			pass[pos.second][pos.first]=1;
		}
	} 
	return 0;
}
