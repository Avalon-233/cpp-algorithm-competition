#include<stdio.h>
using namespace std;

int a[205][205],label[40005][2];

int main()
{
	int n,m,num=0;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	    for(int j=1;j<=m;j++)
	    {
	    	scanf("%d",&a[i][j]);
	    	if(a[i][j]==0)
	    	{
	    		num++;
	    		label[num][0]=i;
	    		label[num][1]=j;
			}
		}
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=n;j++)a[j][label[i][1]]=0;
		for(int j=1;j<=m;j++)a[label[i][0]][j]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
