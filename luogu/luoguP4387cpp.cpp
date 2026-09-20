#include<bits/stdc++.h>
using namespace std;

int pushed[100005],poped[100005],stk[100005];

int main()
{
	int q,n;
	cin>>q;
	for(int k=0;k<q;k++)
	{
		memset(stk,sizeof(stk),0);
		cin>>n;
		for(int i=1;i<=n;i++)cin>>pushed[i];
		for(int i=1;i<=n;i++)cin>>poped[i];
		int num=0,t=1;
		for(int i=1;i<=n;i++)
		{
			stk[++num]=pushed[i];
			while(stk[num]==poped[t]&&num)num--,t++;
		}
		if(num)cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
	return 0;
}
