#include<stdio.h> 
#include<string.h> 
main()
{		char s[31];
 long long n,k;
	int t; scanf("%d",&t);
	while (t--)
	{
  scanf("%s",&s);scanf("%lld",&k);
   n = strlen(s);
while(n<k) n*=2;
while(n>strlen(s))
{
if(k>n/2)
{
	k-=n/2; 
	if(k>1) k-=1;
	 else k=n/2;
}
n/=2;
}
printf("%c\n",s[k-1]) ;	
	}

}

