#include<bits/stdc++.h>
using namespace std;

struct str{
	int a,b,c,tot;
	bool f;
}s[1005];

bool cmp(str x,str y)
{
	if(x.f!=y.f)return x.f>y.f;
	else if(x.tot!=y.tot)return x.tot>y.tot;
	else if(x.a!=y.a)return x.a>y.a;
	else if(x.b!=y.b)return x.b>y.b;
	else return x.c>y.c;
}

int main()
{
    int n,la,lb,lc,k;
	cin>>n>>la>>lb>>lc>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i].a>>s[i].b>>s[i].c;
		s[i].tot=s[i].a+s[i].b+s[i].c;
		if(s[i].a>=la&&s[i].b>=lb&&s[i].c>=lc)s[i].f=1;
		else s[i].f=0;
	}
	sort(s+1,s+n+1,cmp);
	for(int i=1;i<=n;i++)cout<<s[i].a<<" "<<s[i].b<<" "<<s[i].c<<endl;
	cout<<n*k/100;
	return 0;
}
