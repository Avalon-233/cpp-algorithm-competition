#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,ans=0;
	cin>>n;
	while(n)
	{
		ans+=n/5;
		n/=5;
	}
	cout<<ans;
	return 0;
}
