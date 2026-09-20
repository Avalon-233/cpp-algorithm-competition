#include<bits/stdc++.h>
using namespace std;

vector<char> s; 

int main()
{
	int n=0; 
	char ch;
	while(cin>>ch)
	{
		if(ch=='(')s.push_back(ch);
		else
		{
			if(s.size())
			{
				s.pop_back();
				n++;
			}
			else 
			{
				cout<<"false";
				return 0;
			}
		}
	}
	if(s.empty())cout<<n;
	else cout<<"false";
	return 0;
}
