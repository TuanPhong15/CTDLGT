#include<stdio.h>
#include<ctype.h>
template <typename T>
void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
    x *= f;
}

template<typename T> void wr(T n) 
{ 
	bool neg = 0; 

	if (n < 0) 
		n *= -1, neg = 1; 

	char snum[20]; 
	int i = 0; 
	do
	{ 
		snum[i++] = n % 10 + '0'; 
		n /= 10; 
	} 

	while (n); 
	--i; 

	if (neg) 
		putchar('-'); 

	while (i >= 0) 
		putchar(snum[i--]); 

	putchar('\n'); 
} 
main()
{
	int t,n,m;; re(t);
	while(t--)
	{
    re(n); re(m);
    int a[n+3][m+3];
    int dp[n+3][m+3];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
             a[i][j]=dp[i][j]=0;
    }

    for(int i=1;i<=n;i++)
   {        
        for(int j=1;j<=m;j++)
re(a[i][j]);
    }

    dp[1][1]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {

             if(i==1&&j==1) continue;
             dp[i][j] = dp[i-1][j] + dp[i][j-1];

}
}
wr(dp[n][m]);
	}
}