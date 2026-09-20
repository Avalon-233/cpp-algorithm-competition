#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
{
	if(x%y)return gcd(y,x%y);
	else return y;
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		    cout<<gcd(i,j)<<" ";
		cout<<endl;
	}
	return 0;
} 
