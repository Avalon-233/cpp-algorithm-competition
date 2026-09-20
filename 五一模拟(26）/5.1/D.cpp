#include<bits/stdc++.h>
using namespace std;

struct str{
	string n,s;
	int l; 
}p[2005]; 

bool cmp(str a,str b){
	if(a.l==b.l&&a.s.length()==b.s.length())return a.n<b.n;
	else if(a.l==b.l) return a.s.length()>b.s.length();
	else return a.l>b.l;
}

int main()
{
	int n,num;
	cin>>n;
	num=n;
	for(int i=1;i<=n;i++)
	{
		string name,sentence;
		int likes;
		bool f=1; 
		cin>>name>>sentence>>likes;
		for(int j=1;j<=i;j++)
			if(p[j].n==name)
			{
				if(p[j].l<likes)p[j].s=sentence;
				p[j].l+=likes; 
			    p[i].l=-1;
		    	num--;
			    f=0;
			}
		if(f)p[i].n=name,p[i].s=sentence,p[i].l=likes;	
	}
	sort(p+1,p+n+1,cmp);
	for(int i=1;i<=num;i++)cout<<p[i].n<<endl; 
	return 0;
}
