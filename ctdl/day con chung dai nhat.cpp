#include <string.h>
#include <stdio.h>
int max(int a, int b)
{
	return (a>b) ? a : b;
}
char a[1001], b[1001];
int f[1001][1001];
 
main() {
	int t; scanf("%d",&t);
	while(t--)
	{
			scanf("%s",a);
	scanf("%s",b);
	int m = strlen(a);
	int n = strlen(b);
	for(int i=0;i<=m;++i)
	 for(int j=0;j<=n;++j)
		if(i==0 || j==0) f[i][j] = 0;
		else f[i][j] = max(max( f[i][j-1], f[i-1][j]), (a[i-1]==b[j-1]) ? (f[i-1][j-1]+1) : 0);
	printf("%d\n",f[m][n]);
	}


}
 