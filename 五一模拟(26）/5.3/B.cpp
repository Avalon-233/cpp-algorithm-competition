#include<bits/stdc++.h>
using namespace std;

int a[10005]; 

int main()
{
	int n;
	cin>>n; 
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
		if(a[i])
		    cout<<a[i]<<" "; 
	for(int i=1;i<=n;i++)if(!a[i])cout<<a[i]<<" ";
	return 0;
} 
