#include<bits/stdc++.h>
using namespace std;

map<int,int> m; 

int main()
{
	int n,q,i,j,opt,num;
	cin>>n>>q;
	for(int k=1;k<=q;k++)
	{
		cin>>opt;
		if(opt==1)
		{
			cin>>i>>j>>num;
			m[i*100000+j]=num;
		}
		else
		{
			cin>>i>>j;
			cout<<m[i*100000+j]<<endl;
		}
	}
	return 0; 
}
