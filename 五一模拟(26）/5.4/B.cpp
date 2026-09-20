#include<stdio.h>
using namespace std;

int a[10005];

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	a[0]=a[n]; 
	k%=n;
	for(int i=1;i<=n;i++)printf("%d ",a[(i+n-k)%n]);
	return 0;
}
