#include<bits/stdc++.h>
using namespace std;

int mtx[15][15]; 

int main()
{
	int n,m,d,k;
	cin>>n>>m>>d>>k;
	for(int i=1;i<=n;i++)
	    for(int j=1;j<=m;j++)cin>>mtx[i][j];
	k%=4;
	if(!k)
	    for(int i=1;i<=n;i++)
	    {
	    	for(int j=1;j<=m;j++)cout<<mtx[i][j]<<" ";
	    	cout<<endl;
		}
	else if(k==2)
	    for(int i=n;i>0;i--)
	    {
	    	for(int j=m;j>0;j--)cout<<mtx[i][j]<<" ";
	    	cout<<endl;
		}
	else if(k+d==2)
	    for(int i=1;i<=m;i++)
		{
			for(int j=n;j>0;j--)cout<<mtx[j][i]<<" ";
			cout<<endl;
		} 
	else
	    for(int i=m;i>0;i--)
	    {
	    	for(int j=1;j<=n;j++)cout<<mtx[j][i]<<" ";
	    	cout<<endl;
		}
	return 0;
}
