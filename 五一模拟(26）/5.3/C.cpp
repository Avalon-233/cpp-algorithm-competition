#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	string s;
	cin>>k;
	for(int t=1;t<=k;t++)
	{
		cin>>s;
		if(s.length()<8)
		{
			cout<<"NO"<<endl;
			continue;
		}
		bool f=0;
		for(int i=0;i<s.length();i++)
		    if(s[i]>='a'&&s[i]<='z')f=1;
		if(!f)
		{
			cout<<"NO"<<endl;
			continue;
		}
		f=0;
		for(int i=0;i<s.length();i++)
		    if(s[i]>='A'&&s[i]<='Z')f=1;
		if(!f)
		{
			cout<<"NO"<<endl;
			continue;
		}
		f=0;
		for(int i=0;i<s.length();i++)
		    if(s[i]>='0'&&s[i]<='9')f=1;
		if(!f)
		{
			cout<<"NO"<<endl;
			continue;
		}
		f=0;
		for(int i=0;i<s.length();i++)
		    if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='/'||s[i]=='^'||s[i]=='*'||s[i]=='&')f=1;
		if(!f)
		{
			cout<<"NO"<<endl;
			continue;
		}
		f=0;
		for(int i=0;i<s.length()-2;i++)
		    if(s[i]==s[i+1]&&s[i]==s[i+2])f=1;
		if(f)
		{
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
	} 
	return 0;
} 
