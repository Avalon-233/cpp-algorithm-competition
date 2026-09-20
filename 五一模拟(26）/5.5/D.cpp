#include<stdio.h>
#include<string.h>
using namespace std;

char num[1005][1005]; 
int sum[1005];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",&num[i]);
		for(int j=0;j<strlen(num[i]);j++)
		    sum[i]+=num[i][j]-'0';
	} 
	for(int i=1;i<=n;i++)
	{
		int t=i;
		for(int j=i;j<=n;j++)
		{
			if(sum[j]<sum[t])t=j;
			else if(sum[j]==sum[t]&&strlen(num[j])<strlen(num[t]))t=j;
			else if(sum[j]==sum[t]&&strlen(num[j])==strlen(num[t])&&strcmp(num[j],num[t])<0)t=j;
		} 
		char s[1005];
		strcpy(s,num[t]);
		strcpy(num[t],num[i]);
		strcpy(num[i],s);
		int tem=sum[t]; 
		sum[t]=sum[i];
		sum[i]=tem;
	} 
	for(int i=1;i<=n;i++)printf("%s\n",num[i]);
	return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

struct str{
	string s;int n;
}num[1005]; 

bool cmp(str x,str y){
	if(x.n==y.n&&x.s.length()==y.s.length())return x.s<y.s;
	else if(x.n==y.n)return x.s.length()<y.s.length();
	else return x.n<y.n;
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i].s;
		for(int j=0;j<num[i].s.length();j++)num[i].n+=num[i].s[j]-'0';
	}
	sort(num+1,num+1+n,cmp); 
	for(int i=1;i<=n;i++)cout<<num[i].s<<endl; 
	return  0;
}
*/
