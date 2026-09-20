#include<bits/stdc++.h>
using namespace std;

int num[1005];

int main()
{
	int n,x,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(!num[x])sum++;
		num[x]++;
	}
	cout<<sum<<endl;
	for(int i=1;i<=1000;i++)if(num[i])cout<<i<<" ";
	return 0;
}
