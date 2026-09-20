#include<bits/stdc++.h>
using namespace std;

int main()
{
	char ch,lch;
	int n=0;
	while(cin>>ch)
	{
		if(ch>='a'&&ch<='z')
		{
			for(int i=1;i<=n;i++)cout<<lch;
			n=0;
			lch=ch;
		}
		else{
			n*=10;
			n+=ch-'0';
		}
	}
	for(int i=1;i<=n;i++)cout<<lch;
	return 0;
}
