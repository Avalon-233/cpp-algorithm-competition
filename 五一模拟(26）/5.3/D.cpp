#include<bits/stdc++.h>
using namespace std;

struct str{
	int v,num;
}a[20005]; 

bool cmp(str x,str y){
	if(x.num==y.num)return x.v>y.v;
	else return x.num>y.num;
}

int main()
{
	int n,k,an,tot=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>an;
		bool f=1;
		for(int i=1;i<=tot;i++)
			if(a[i].v==an)
			{
				a[i].num++; 
				f=0;
			    break; 
			}
		if(f)
		{
			a[++tot].v=an;
			a[tot].num++;
		}
	}
	sort(a+1,a+1+tot,cmp);
	for(int i=1;i<=k;i++)cout<<a[i].v<<" "; 
	return 0;
} 
