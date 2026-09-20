#include<bits/stdc++.h>
using namespace std;

int num[200005];
map<int,long long>  m;

int main()
{
	int N,C;
	long long ans=0;
	cin>>N>>C;
	for(int i=0;i<N;i++)cin>>num[i];
	for(int i=0;i<N;i++)m[num[i]]++;
	for(int i=0;i<N;i++)ans+=m[num[i]-C];
	cout<<ans;
	return 0;
} 
