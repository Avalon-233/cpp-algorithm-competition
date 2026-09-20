#include<bits/stdc++.h>
#include<list>
#include<iterator>
using namespace std;
/*
list<char> str;

int main()
{
    int t,opt;
    string s,s1,s2;
	cin>>s;
	cin>>t;
	for(int i=0;i<s.length();i++)
	    str.push_back(s[i]);
	for(int i=1;i<=t;i++)
	{
		cin>>opt;
		if(opt==1)
		{
			cin>>s1;
			for(list<char>::iterator it = str.begin();it!=str.end();it++)
			{
				if(*it==s1[0]&&it!=str.end())
				{
					int num=0;
					bool f=1;
					for(int k=0;k<s1.length();k++)
					{
						it++;num++;
						if(*it!=s1[k]||it==str.end())
						{
							f=0;
							break; 
						}
					}
					for(int k=1;k<=num;k++)it--; 
					if(f)
					{
						list<char>::iterator del;
						for(int k=0;k<s1.length();k++)del++;
						str.erase(it,del);
					}
				} 
			}
		}
		else if(opt==2)
		{
			cin>>s1;
			for(list<char>::iterator it = str.begin();it!=str.end();it++)
			{
				if(*it==s1[0]&&it!=str.end())
				{
					int num=0;
					bool f=1;
					for(int k=0;k<s1.length();k++)
					{
						it++;num++;
						if(*it!=s1[k]||it==str.end())
						{
							f=0;
							break; 
						}
					}
					for(int k=1;k<=num;k++)it--; 
					if(f)
					{
						list<char>::iterator del;
						for(int k=0;k<s1.length();k++)del++;
						
					}
				} 
			}
		} 
	}
	return 0;
}
*/
int main()
{
	int t,opt;
	string s,s1,s2;
	cin>>s;
	cin>>t;
	int l=s.length(); 
	for(int i=1;i<=t;i++)
	{
		cin>>opt;
		if(opt==1)
		{
			cin>>s1;
			for(int j=0;j<l;j++)
			{
				if(s[j]==s1[0])
				{
					bool f=1;
					for(int k=0;k<s1.length();k++)
						if(s[j+k]!=s1[k]||j+k>=l)
						{
							f=0;
							break; 
						}
					if(f)for(int k=j;k<l;k++)s[k]=s[k+s1.length()];
					l-=s1.length();
				}
			}
		}
		if(opt==2)
		{
			cin>>s1;
			for(int j=0;j<l;j++)
			{
				if(s[j]==s1[0])
				{
					bool f=1;
					for(int k=0;k<s1.length();k++)
						if(s[j+k]!=s1[k]||j+k>=l)
						{
							f=0;
							break; 
						}
					if(f)for(int k=l+s1.length()-1;k>=j+s1.length()-1;k--)s[k]=s[k-s1.length()];
					l+=s1.length();
				}
			}
		} 
		if(opt==3)
		{
			cin>>s1>>s2;
			for(int j=0;j<l;j++)
			{
				if(s[j]==s1[0])
				{
					bool f=1;
					for(int k=0;k<s1.length();k++)
						if(s[j+k]!=s1[k]||j+k>=l)
						{
							f=0;
							break; 
						}
					if(f)
					{
						for(int k=l+s2.length()-1;k>=j+s2.length()-1;k--)s[k]=s[k-s2.length()];
						for(int k=0;k<s2.length();k++)s[j+k]=s2[k];
					}
					l=l-s1.length()+s2.length();
				}
			}
		} 
	}
	return 0;
} 
