#include<bits/stdc++.h>
using namespace std;

int a[1000005],upq[1000005],downq[1000005]; 

int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	int head=0,tail=0;
	for(int i=1;i<=n;i++)
	{
		while(head<tail&&a[upq[tail]]>a[i])tail--;
		upq[++tail]=i;
		if(upq[head+1]<=i-k)head++;
		if(i>=k)cout<<a[upq[head+1]]<<" ";
	}
	cout<<endl;
	head=0,tail=0;
	for(int i=1;i<=n;i++)
	{
		while(head<tail&&a[downq[tail]]<a[i])tail--;
		downq[++tail]=i;
		if(downq[head+1]<=i-k)head++;
		if(i>=k)cout<<a[downq[head+1]]<<" ";
	} 
	return 0;
}
