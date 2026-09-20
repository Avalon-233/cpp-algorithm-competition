#include<bits/stdc++.h>
using namespace std;

int ans,n;
int a[55],up[55],down[55];

bool dfs(int num_a,int num_up,int num_down)
{
    if(num_up+num_down>ans)return 0;
    if(num_a>n)return 1;
    //add to up system
    int index=0;
    for(int i=1;i<=num_up;i++)
        if(up[i]<a[num_a])
        {
            if(!index)index=i;
            else
                if(up[i]>up[index])index=i;
        }
    if(index)
    {
        int t=up[index];
        up[index]=a[num_a];
        if(dfs(num_a+1,num_up,num_down))return 1;
        up[index]=t;
    }
    //add to down system
    index=0;
    for(int i=1;i<=num_down;i++)
        if(down[i]>a[num_a])
        {
            if(!index)index=i;
            else 
                if(down[i]<down[index])index=i;
        }
    if(index)
    {
        int t=down[index];
        down[index]=a[num_a];
        if(dfs(num_a+1,num_up,num_down))return 1;
        down[index]=t;
    }
    //new up system
    up[++num_up]=a[num_a];
    if(dfs(num_a+1,num_up,num_down))return 1;
    num_up--;
    //new down system
    down[++num_down]=a[num_a];
    if(dfs(num_a+1,num_up,num_down))return 1;
    num_down--;
    return 0;
}

int main()
{
    while(cin>>n)
    {
        if(n==0)break;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(ans=1;ans<=n;ans++)
        {
        	memset(up,0,sizeof(up));
			memset(down,0,sizeof(down)); 
            if(dfs(1,0,0))break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
