#include<stdio.h>
#include<algorithm>
using namespace std;

int lq[10005];
pair<int,int>p[10005]; 

bool cmp(pair<int,int> x,pair<int,int> y){
	return x.first<y.first;
}

int main()
{
	int n,num=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d%d",&p[i].first,&p[i].second);
	sort(p+1,p+1+n,cmp); 
	for(int i=1;i<=n;i++)
	{
		bool f=0;
		int pos,mint=24;
		for(int j=1;j<=num;j++)
		{
			if(lq[j]<=p[i].first)
			{
				f=1;
				if(mint>lq[j])
				{
					mint=lq[j];
					pos=j;
				}
			}
		}
		if(!f)lq[++num]=p[i].second;
		else lq[pos]=p[i].second;
	}
	printf("%d",num);
	return 0;
}

/*
int nt[25];

int main()
{
	int n,t1,t2,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&t1,&t2);
		for(int j=t1;j<t2;j++)nt[j]++;
	}
	for(int i=0;i<=23;i++)if(nt[i]>ans)ans=nt[i];
	printf("%d",ans);
	return 0;
}
*/
