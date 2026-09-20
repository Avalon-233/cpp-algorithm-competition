#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int ans=0,begin=0,tail=0,num,pos;
	cin>>s;
	/*
	for(int i=0;i<s.length();i++)
	{
		bool f=1;
		pos=i;
		while(pos<s.length()&&f)
		{
			pos++;
			for(int j=i;j<pos;j++)
			{
				if(s[j]==s[pos])
				{
					f=0;
					break;
				}
			}
		}
		ans=max(ans,pos-i);
	}
	*/
	
	while(begin<s.length()&&tail<s.length())
	{
		
		int pos=-1; 
		for(int i=begin;i<tail;i++)
		    if(s[i]==s[tail])pos=i; 
		if(pos>=0)begin=pos+1;
		ans=max(ans,tail-begin+1);tail++;
	}
	
	cout<<ans;
	return 0;
}
