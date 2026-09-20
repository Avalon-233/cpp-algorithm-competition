#include<bits/stdc++.h>
using namespace std;

int a1[1005],a2[1005],a3[1005]; 
bool _a1[1005];

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a1[i];
	for(int i=1;i<=m;i++)cin>>a2[i];
	int p=1;
	while(p<=m)
	{
		for(int i=1;i<=n;i++)
		    if(a1[i]==a2[p]&&_a1[i]==false)
		    {
		    	cout<<a1[i]<<" ";
		    	_a1[i]=true;
			}
		p++;
	}
	int num=0;
	for(int i=1;i<=n;i++)if(_a1[i]==0)a3[++num]=a1[i];
	sort(a3+1,a3+1+num);
	for(int i=1;i<=num;i++)cout<<a3[i]<<" ";
	return 0;
}
