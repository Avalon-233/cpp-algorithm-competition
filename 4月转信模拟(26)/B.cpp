#include<bits/stdc++.h>
using namespace std;

int f[105];

int main()
{
    int n;
    cin>>f[1]>>f[2]>>n;
	for(int i=3;i<=n;i++)
	{
		if(i%2)f[i]=f[i-1]+f[i-2];
		else f[i]=f[i-1]-f[i-2];
	}
	cout<<f[n];
	return 0;
}
