#include<stdio.h>
#include<string.h>


void solve(char *s)
{
int i=strlen(s)-1;
int dem = 0;
	while(s[i]=='1'){s[i]='0';i--;dem++;}
	s[i]='1';
	if(dem == strlen(s))   printf("%s0\n",s);
	else printf("%s\n",s);
}
main()
{
	int t; scanf("%d",&t);
	char s[1003]; while(t--)
	{
	scanf("%s",s);
	solve(s);
	}

}