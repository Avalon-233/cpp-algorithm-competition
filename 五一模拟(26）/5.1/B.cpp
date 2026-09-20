#include<bits/stdc++.h>
using namespace std;

int a[1005],b[1005];
 
int main()
{
	int n,dist=INT_MAX;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)b[i]=INT_MAX;
	for(int i=1;i<=n;i++)
	    for(int j=1;j<i;j++)
	    {
	    	if(a[i]==a[j])b[i]=min(b[i],i-j);
	    	dist=min(dist,b[i]);
		}
	
	if(dist<n)cout<<dist;
	else cout<<-1;
	return 0;
}
