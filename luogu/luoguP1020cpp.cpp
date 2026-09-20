#include<bits/stdc++.h>
using namespace std;

vector<int >vec; 
int dp[10005],sys[10005];

int main()
{
    int h;
	while(cin>>h)vec.push_back(h);
	
	int ans1=0;
	memset(dp,sizeof(dp),1);
	for(int i=0;i<vec.size();i++)
	{
		for(int j=0;j<i;j++)
			if(vec[j]>=vec[i])
			    dp[i]=max(dp[i],dp[j]+1);
		ans1=max(ans1,dp[i]);
	}
	cout<<ans1<<endl;
	
	int ans2=0;
	for(int i=0;i<vec.size();i++)
	{
		int minh=INT_MAX,t=0;
		for(int j=1;j<=ans2;j++)
		{
			if(sys[j]>=vec[i]&&sys[j]<minh)
			{
				minh=sys[j];
				t=j;
			}
		}
		if(t)sys[t]=vec[i];
		else sys[++ans2]=vec[i];
	}
	cout<<ans2;
	return 0;
}
