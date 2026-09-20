#include<bits/stdc++.h>
using namespace std;

long long stk[5005];

int main()
{
	long long num=0,n=0;
	char ch;
	while((ch=getchar())!='@')
	{
		if(ch>='0'&&ch<='9')n=n*10+ch-'0';
		else if(ch=='.')
		{
			stk[++num]=n;
			n=0;
		}
		else 
		{
			if(ch=='+')stk[num-1]=stk[num-1]+stk[num--];
			else if(ch=='-')stk[num-1]=stk[num-1]-stk[num--];
			else if(ch=='*')stk[num-1]=stk[num-1]*stk[num--];
			else if(ch=='/')stk[num-1]=stk[num-1]/stk[num--];
			 
		}
	}
	cout<<stk[1];
	return 0;
 } 
