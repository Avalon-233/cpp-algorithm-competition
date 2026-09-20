#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char s[55];
	scanf("%d\n",&n); 
	gets(s); 
	//fgets(s,sizeof(s),stdin);
	for(int i=0;i<strlen(s);i++)
	    printf("%c",(s[i]-'a'+n)%26+'a'); 
	return 0;
}
