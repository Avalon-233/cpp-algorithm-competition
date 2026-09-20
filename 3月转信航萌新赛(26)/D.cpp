#include<bits/stdc++.h>
using namespace std;

int a[40005];

int main()
{
	int n,k,sco;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>sco;
		a[sco]++;
	}
	for(int i=1;i<=40003;i++)
	{
		if(a[i])k--;
		if(!k)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<"NO RESULT";
	return 0;
}
