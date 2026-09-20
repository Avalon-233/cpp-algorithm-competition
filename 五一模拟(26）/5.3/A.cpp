#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int y=2026,m=5,d=3,h=14,min=30,s=30; 
	cin>>n;
	s+=n;
	while(s>=60)
	{
		min+=1;
		s-=60;
	}
	while(min>=60)
	{
		h+=1;
		min-=60;
	}
	while(h>=24)
	{
		d+=1;
		h-=24;
	}
	while(d>28)
	{
		if(m>12)
		{
			y+=1;
			m-=12;
		} 
		if((m%12==1||m%12==3||m%12==5||m%12==7||m%12==8||m%12==10||m%12==0)&&d>31){
			m+=1;
			d-=31;
		}
		else if((m%12==4||m%12==6||m%12==9||m%12==11)&&d>30){
			m+=1;
			d-=30;
		}
		else if(m%12==2){
			if(y%4!=0&&d>28){
				m+=1;
				d-=28;
			} 
			else if(y%4==0&&d>29){
				m+=1;
				d-=29;
			}
		}
		else break;
		
	}
	while(m>12)
	{
		y+=1;
		m-=12;
	}
	printf("%4d-%02d-%02d %02d:%02d:%02d",y,m,d,h,min,s);
	return 0;
} 
