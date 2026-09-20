#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a1=1,a2=1,sum2=0,len=0;;
	string s;
	cin>>s;
	if(s[0]=='-')a1=1.5;
	if(s[s.length()-1]=='0'||s[s.length()-1]=='2'||s[s.length()]=='4'||s[s.length()-1]=='6'||s[s.length()-1]=='8')a2=2;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='2')sum2++;
		if(s[i]!='-')len++;
	}
	printf("%.2lf",sum2/len*a1*a2*100);cout<<"%";
	return 0;
} 
