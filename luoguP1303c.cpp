#include<stdio.h>
#include<string.h>

char s1[2005],s2[2005]; 
int a[2005],b[2005],c[4000005]; 

int main()
{
	scanf("%s",&s1);
	scanf("%s",&s2);
	int len1=strlen(s1),len2=strlen(s2),len;
	if(len1>len2)len=len1;
	else len=len2;
	for(int i=0;i<len1;i++)a[i]=s1[len1-i-1]-'0';
	for(int i=0;i<len2;i++)b[i]=s2[len2-i-1]-'0';
	for(int i=0;i<len1;i++)
	    for(int j=0;j<len2;j++)
	        c[i+j+1]+=a[i]*b[j];
	for(int i=0;i<len;i++)
	    if(c[i]>=10)
	    {
	    	c[i+1]+=c[i]/10;
	    	c[i]%=10;
		}
	while(c[len])
	{
		if(c[len]>=10)
		{
			c[len+1]+=c[len]/10;
			c[len]%=10;
		}
		len++; 
	}
	for(int i=len-1;i>=1;i--)printf("%d",c[i]);
	return 0;
} 
