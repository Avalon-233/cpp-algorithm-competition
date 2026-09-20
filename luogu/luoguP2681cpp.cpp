#include<bits/stdc++.h>
using namespace std;

int a[1005];

int main()
{
	int n,m,x,y;
	bool f;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=m;i++)
	{
		cin>>f>>x>>y;
		if(f)a[x]=y;
		else
		{
			int maxn=0,num=0;
			map<int,int> cnt;
			for(int j=x;j<=y;j++)
				if(++cnt[a[j]]>maxn||(cnt[a[j]]==maxn&&num>a[j]))num=a[j],maxn=cnt[a[j]];
			cout<<num<<endl;
		}
	}
	return 0; 
}
