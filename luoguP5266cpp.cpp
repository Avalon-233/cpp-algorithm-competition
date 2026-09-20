#include<bits/stdc++.h>
using namespace std;

struct sys{
	string name;int score,tag;
};
sys stu[100005];

int main()
{
	int n,opt,num=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string name0;
		cin>>opt;
		if(opt==1)
		{
			int sco,t=0;
			cin>>name0>>sco;
			for(int j=0;j<num;j++)
				if(stu[j].name==name0&&stu[j].tag)
				{
					stu[j].score=sco;
					cout<<"OK"<<endl;
					t=1;
				}
			if(!t)
			{
				stu[num].name=name0,stu[num].score=sco,stu[num++].tag=1; 
				cout<<"OK"<<endl;
			}
		}
		if(opt==2)
		{
			int t=0;
			cin>>name0;
			for(int j=0;j<num;j++)
				if(stu[j].name==name0&&stu[j].tag)
				{
					cout<<stu[j].score<<endl;
					t=1;
				}
			if(!t)cout<<"Not found"<<endl;
		}
		if(opt==3)
		{
			int t=0;
			cin>>name0;
			for(int j=0;j<num;j++)
			    if(stu[j].name==name0&&stu[j].tag)
				{
					stu[j].tag=0;
					cout<<"Deleted successfully"<<endl;
					t=1;
				}
			if(!t)cout<<"Not found"<<endl;
		}
		if(opt==4)
		{
			int sum=0;
			for(int j=0;j<num;j++)
			    if(stu[j].tag)sum++;
			cout<<sum<<endl;
		}
	} 
	return 0;
} 
