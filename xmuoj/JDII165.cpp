#include<bits/stdc++.h>
using namespace std;

struct {
    int px,py,mask,cnt;
}qe[200005];

int n,m,p,ans,head,tail;
int key[15][15],gate[15][15][15][15];
bool visited[15][15][2005]; 
int dx[4]={0,1,0,-1},
    dy[4]={1,0,-1,0};

void push(int x,int y)
{
	int next=key[x][y]?(qe[head].mask|(1<<key[x][y])):qe[head].mask;
	if(visited[x][y][next])return ;
    qe[tail].px=x,qe[tail].py=y;
    qe[tail].cnt=qe[head].cnt+1;
	qe[tail].mask=next;
    visited[x][y][next]=true;
    tail++;
}

int bfs()
{
    head=0,tail=1;
    push(1,1); 
    while(head<tail)
    {
        int x=qe[head].px,y=qe[head].py;
        if(x==n&&y==m)
            return qe[head].cnt-1;
        for(int i=0;i<4;i++)
        {
        	if(x+dx[i]<1||y+dy[i]<1||x+dx[i]>n||y+dy[i]>m)continue;
            if(gate[x][y][x+dx[i]][y+dy[i]]<0)push(x+dx[i],y+dy[i]);
            else 
            {
                int g=gate[x][y][x+dx[i]][y+dy[i]];
                if(qe[head].mask&(1<<g))push(x+dx[i],y+dy[i]);
            }
        }
        head++;
    }
    return -1;
}

int main()
{
    memset(gate,-1,sizeof(gate));
    int k,s;
    cin>>n>>m>>p>>k;
    for(int i=1;i<=k;i++)
    {
        int x1,x2,y1,y2,g;
        cin>>x1>>y1>>x2>>y2>>g;
        gate[x1][y1][x2][y2]=g;
		gate[x2][y2][x1][y1]=g;
    }
    cin>>s;
    for(int i=1;i<=s;i++)
    {
        int x,y,q;
        cin>>x>>y>>q;
        key[x][y]=q;
    }
    cout<<bfs();
    return 0;
}
