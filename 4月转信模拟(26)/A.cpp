#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
    cin>>n;
    m=(n+1)/2;
    for(int i=1;i<=n;i++)
    {
    	if(i<=m)for(int j=1;j<=i;j++)cout<<j;
    	else {
    		for(int j=1;j<=i;j++)
    		{
    			cout<<min(j,n+1-i);
			}
		}
		cout<<endl;
	}
	return 0;
}
