#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h> 

int n[30];

int main()
{
	bool f=0;
	int maxn=0,minn=200,c;
	char s[105];
	gets(s);
	for(int i=0;i<strlen(s);i++)
		n[s[i]-'a']++;
	for(int i=0;i<=26;i++)
	{
		if(n[i]==0)continue;
		if(minn>n[i])minn=n[i];
		if(n[i]>maxn)maxn=n[i];
	} 
	c=maxn-minn;
	if(c==1||c==0)f=1;
	else if(c==2)f=0; 
	else 
	{
		int i;
		for(i=2;i*i<c;i++);
		    if(c%i==0)f=1;
	}
	if(f)printf("No Answer\n0");
	else printf("Lucky Word\n%d",c);
	return 0;
}
