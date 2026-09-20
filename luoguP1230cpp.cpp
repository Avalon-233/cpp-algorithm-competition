#include<bits/stdc++.h>
using namespace std;

pair<int,int> tsk[505]; 
bool tbl[505];

bool cmp(pair <int,int> a,pair<int,int> b)
{
	if(a.second==b.second) return a.first>b.first;
	return a.second>b.second;
}

int main()
{
	int n,m;
	cin>>m>>n;
	for(int i=1;i<=n;i++)cin>>tsk[i].first;
	for(int i=1;i<=n;i++)
	{
		cin>>tsk[i].second;
		m-=tsk[i].second;
	}
	sort(tsk+1,tsk+n+1,cmp); 
	for(int i=1;i<=n;i++)tbl[i]=1;
	
	int t=1;
	for(int i=1;i<=n;i++)
	{
		int p=tsk[i].first;
		while(p>0)
		{
			if(tbl[p])
			{
				tbl[p]=0;
				m+=tsk[i].second;
				break;
			}
			p--;
		}
	}
	cout<<m;
	return 0;
}
