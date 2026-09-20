#include<stdio.h>
#include<string.h>
using namespace std;

int s[55],num[55]; 
char str[15]; 

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&s[i]); 
	while(1)
	{
		scanf("%s",&str); 
		if(strcmp(str,"end")==0)break;
		else if(strcmp(str,"order")==0)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			if(x<=n&&x>=1&&y<=s[x]-num[x])
			{
				num[x]+=y;
				printf("Success\n");
			} 
			else printf("Failed\n");
		}
		else if(strcmp(str,"cancel")==0)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			if(x<=n&&x>=1&&y<=num[x])
			{
				num[x]-=y;
				printf("Success\n"); 
			}
			else printf("Failed\n");
		}
		else if(strcmp(str,"print")==0) 
		{
			for(int i=1;i<=n;i++)
		    	printf("%d ",s[i]-num[i]);
		    printf("\n");
		}	
		memset(str,0,sizeof(str)); 
	}
	return 0;
}
