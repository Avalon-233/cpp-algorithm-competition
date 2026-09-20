#include<stdio.h>
#include<string.h>

char s1[505],s2[505];
int a[505],b[505];

int main()
{
	scanf("%s",&s1);
	scanf("%s",&s2);
	
	int len1=strlen(s1),len2=strlen(s2);
	int t1=0;
	while(len1-1>0&&s1[t1]=='0'){len1--;t1++;}
	int t2=0;
	while(len2-1>0&&s2[t2]=='0'){len2--,t2++;}
	for(int i=0;i<len1;i++)a[i]=s1[t1+len1-i-1]-'0';
	for(int i=0;i<len2;i++)b[i]=s2[t1+len2-i-1]-'0'; 
	
	int len;
	if(len1>len2)len=len1;
	else len=len2;
	for(int i=0;i<len;i++)a[i]+=b[i];
	for(int i=0;i<len;i++)
	    while(a[i]>=10)
	    {
	    	a[i+1]+=a[i]/10;
	    	a[i]%=10;
		}
	if(a[len])len++;
	
	for(int i=len-1;i>=0;i--)printf("%d",a[i]);
	return 0;
} 
