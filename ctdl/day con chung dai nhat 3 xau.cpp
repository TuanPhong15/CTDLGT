#include<stdio.h>
#include<ctype.h>
template <typename T> void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar_unlocked();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar_unlocked();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar_unlocked();
    x *= f;
}

template<typename T> void wr(T n) 
{ 
	bool neg = 0; 
	if (n < 0) n *= -1, neg = 1; 
	char snum[20]; int i = 0; 
	do	{ snum[i++] = n % 10 + '0'; 	n /= 10; } 	while (n); 
	--i; 
	if (neg) putchar_unlocked('-'); 
	while (i >= 0)	putchar_unlocked(snum[i--]); 
	putchar_unlocked('\n'); 
} 
int max(int a, int c)
{
	return (a>c)?a:c;
}
    
int dp[101][101][101];
int solve(char *stra,char *strb,char *strc,int l,int m,int n)
{
    int i,j,k;
    for(i=0;i<=l;i++)
    for(j=0;j<=m;j++)
    for(k=0;k<=n;k++)
    {
        if(!i||!j||!k){dp[i][j][k]=0;continue;}
        if(stra[i-1]==strb[j-1]&&strc[k-1]==stra[i-1])
        dp[i][j][k]=dp[i-1][j-1][k-1]+1;
        else
        dp[i][j][k]=max(max(dp[i-1][j][k],dp[i][j-1][k]),dp[i][j][k-1]);
    }
    return dp[l][m][n];
}
main() {
	int t ,l,m,n;char stra[101],strb[101],strc[101];
	re(t);
	while(t--)
	{
	   
	    re(l);re(m);re(n);
	    
	    scanf("%s %s %s",stra,strb,strc);
	    printf("%d\n",solve(stra,strb,strc,l,m,n));
	}
	return 0;
}