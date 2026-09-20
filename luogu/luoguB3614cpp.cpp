#include<bits/stdc++.h>
using namespace std;

unsigned long long stk[1000005];

int main()
{
	int T,n,num;
	cin>>T;
	for(int k=0;k<T;k++)
	{
		num=0;
		cin>>n;
		string opt;
		for(int i=0;i<n;i++)
		{
			cin>>opt;
			if(opt=="push")
			{
				unsigned long long x;
				cin>>x;
				stk[++num]=x;
			}
			else if(opt=="pop")
			{
				if(num)num--;
				else cout<<"Empty"<<endl;
			}
			else if(opt=="query")
			{
				if(num)cout<<stk[num]<<endl;
				else cout<<"Anguei!"<<endl;
			}
			else if(opt=="size")cout<<num<<endl;
		}
	} 
	return 0;
}
