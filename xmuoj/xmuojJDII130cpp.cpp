#include<bits/stdc++.h>
using namespace std;

int a[1000005],dp[1000005],tails[1000005];

int main()
{
    int n,len=1;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    tails[len]=a[1];
    for(int i=2;i<=n;i++)
    {
        if(tails[len]<a[i])tails[++len]=a[i];
        else 
        {
            int l=1,r=len;
            while(l<r)
            {
                int mid=(r+l)/2;
                if(tails[mid]<a[i])l=mid+1;
                else r=mid;
            }
            tails[l]=a[i];
        }
    }
    cout<<len;
    return 0;
}
