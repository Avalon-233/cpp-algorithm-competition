#include<bits/stdc++.h>
using namespace std;

int v[35];
bitset<20005> bs(0);

int main()
{
    int c,n;
    cin>>c>>n;
    for(int i=1;i<=n;i++)cin>>v[i];
    bs.set(0);
    for(int i=1;i<=n;i++)
        bs|=bs<<v[i];
    for(int i=c;i>=0;i--)
        if(bs[i])
        {
        	cout<<c-i;
        	break;
		}
    return 0;
}
