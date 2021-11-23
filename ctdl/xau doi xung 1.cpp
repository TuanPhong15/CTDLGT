#include<stdio.h>
#include<string.h>
int min (int a, int b)
{
	return (a<b) ? a : b;
}
int solve(char *str,int n)
{
	int i,j,k,l,a[n][n];
	memset(a,0,sizeof(a));
	if(n==0)
		return 0;
	for(l=2;l<=n;l++)
	{
		for(i=0;i<n-l+1;i++)
		{
			j=i+l-1;
			if(str[i]==str[j])
			{
				a[i][j]=a[i+1][j-1];
			}
			else
				a[i][j]=min(a[i+1][j],a[i][j-1])+1;
		}
	}
	return a[0][n-1];
}
main()
{
	int T;char str[100];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",str);
		printf("%d\n",solve(str,strlen(str)));
	}
}

			
