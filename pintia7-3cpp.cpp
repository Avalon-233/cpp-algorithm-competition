#include<bits/stdc++.h>
using namespace std;

int fre[100005],fre0[100005],inquire[10005];

int main()
{
	int N,n,sum=0;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		int num;
		cin>>n;
		if(n==1)cin>>num;
		else if(n>1)
		    for(int j=1;j<=n;j++)
		    {
		    	cin>>num;
		    	if(!fre[num])sum++;
		    	fre[num]++;
			}
    }
    int cnt=0,num=0;
    bool f=1; 
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		int x;
		cin>>x;
		if(!fre0[x])inquire[++num]=x;
		fre0[x]++;
		if(!fre[inquire[num]])cnt++;
	}
	if(!cnt)cout<<"No one is handsome";
	else
	    for(int i=1;i<=num;i++)if(!fre[inquire[i]]){
	    	if(f){
	    		cout<<setw(5)<<setfill('0')<<inquire[i];f=0;
			}
			else cout<<" "<<setw(5)<<setfill('0')<<inquire[i];
		}
	return 0;
}
