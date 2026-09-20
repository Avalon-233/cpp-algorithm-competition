#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005],w1[1005],w2[1005];

int main()
{
    int n,m,num,c=0,r=0;
    cin>>n>>m>>num;
    for(int i=1;i<=num;i++)cin>>w1[i]>>w2[i];
    for(int i=1;i<=num;i++)
        for(int j=n;j>=w1[i];j--)
            for(int k=m-1;k>=w2[i];k--)
            {
                dp[j][k]=max(dp[j][k],dp[j-w1[i]][k-w2[i]]+1);
                if(dp[j][k]>=c)
                    c=dp[j][k];
            }
    for(int j=n;j>=0;j--)
        for(int k=m;k>=0;k--)
            if(dp[j][k]==c)r=max(r,m-k);
    cout<<c<<" "<<r;
    return 0;
}
