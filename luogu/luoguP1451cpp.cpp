#include<bits/stdc++.h>
using namespace std;

int mx[4]={0,0,1,-1},px[10005],py[10005],
    my[4]={1,-1,0,0};
bool cell[105][105],if_pass[105][105];

int main()
{
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	    for(int j=1;j<=m;j++)
		{
			char ch;
			cin>>ch;
			if(ch=='0')cell[i][j]=0;
			else cell[i][j]=1;
		}
	for(int i=1;i<=n;i++)
	    for(int j=1;j<=m;j++)
	    {
	    	if(cell[i][j]&&if_pass[i][j]==0)
	    	{
	    		ans++;
	    		int head=0,tail=1;
	    		px[0]=i,py[0]=j,if_pass[i][j]=1;
	    		while(head<tail)
	    		{
	    			for(int k=0;k<4;k++)
	    			{
	    				int x=px[head]+mx[k],y=py[head]+my[k];
	    				if(cell[x][y]&&if_pass[x][y]==0)
	    				{
							if_pass[x][y]=1;
							px[tail]=x,py[tail]=y;
							tail++;
						}
					}
					head++; 
				}
			}
		}
	cout<<ans;
	return 0;
}
