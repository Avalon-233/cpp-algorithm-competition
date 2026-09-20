#include<bits/stdc++.h>
using namespace std;

int pos[1005]; 

int main()
{
	int num=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	    if(s[i]==':')pos[++num]=i;
	for(int i=1;i<=num;i++)
	{
		if(i==1)
		{
			if(pos[i]>0)
			{
				for(int j=1;j<=4-pos[i];j++)cout<<'0';
				for(int j=0;j<pos[i];j++)cout<<s[j];
				if(i<num)cout<<':';
			}
		}
		else
		{
			if(pos[i]==pos[i-1]+1)
			{
				if(pos[1]==0)cout<<"0000:";
				for(int j=1;j<=8-num;j++)cout<<"0000:";
			}
			else
			{
				for(int j=1;j<=5-pos[i]+pos[i-1];j++)cout<<'0';
				for(int j=pos[i-1]+1;j<pos[i];j++)cout<<s[j];
				cout<<':';
			}
		}
	}
	for(int j=1;j<=5-s.length()+pos[num];j++)cout<<'0';
	for(int j=pos[num]+1;j<s.length();j++)cout<<s[j];
	return 0;
}
