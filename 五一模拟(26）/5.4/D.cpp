#include<bits/stdc++.h>
using namespace std;

string s[1005];

int main()
{
	int n=1;
	cin>>s[0];
	while(n<=s[0].length())
	{
		for(int i=1;i<s[n-1].length();i++)
		    s[n]+=s[n-1][i];
		n++;
	}
	sort(s,s+n);
	for(int i=1;i<n;i++)cout<<s[i]<<endl;
	return 0;
} 
