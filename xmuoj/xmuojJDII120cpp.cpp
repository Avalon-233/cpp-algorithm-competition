#include<bits/stdc++.h>
using namespace std;

int a[1005][1005],dp[1005][1005];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            cin>>a[i][j];
    for(int i=n;i>0;i--)
        for(int j=1;j<=i;j++)
        {
            if(i==n)dp[i][j]=a[i][j];
            else dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+a[i][j];
        }
    cout<<dp[1][1];
    return 0;
}
