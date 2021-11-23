#include<stdio.h>
#include<ctype.h>
#include<string.h>

template <typename T>
void re(T& x)
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
		putchar_unlocked('-'); 

	while (i >= 0) 
		putchar_unlocked(snum[i--]); 

	putchar_unlocked('\n'); 
} 

main()
{
	int t,n; char s[100]; re(t);
	while(t--)
	{
		re(n);
		scanf("%s",s);
		int dp[n+1][n+1];
		memset(dp,0,sizeof(dp));
		for(int i = 1; i <=n; i ++)
		   for(int j = 1; j <=n; j ++)
		       {
		       	if(s[i-1]==s[j-1]&& i!=j)
		       	   dp[i][j] = dp[i-1][j-1]+ 1;
		       	else dp[i][j] =  (dp[i-1][j]>dp[i][j-1]) ? dp[i-1][j]:dp[i][j-1] ;
			   }
			   wr(dp[n][n]);
	}
}