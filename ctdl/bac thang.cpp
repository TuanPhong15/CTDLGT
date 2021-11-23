#include<stdio.h>
#include<ctype.h>
#define int long long
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

const long long mod = 1e9+7;
int min(int a, int b)
{
	return (a<b) ? a:b;
}
main()
{
	int t, n,k; re(t); while(t--)
	{
		re(n);re(k); long long dp[n+1]={0}; 
 dp[0] = dp[1] =1;
  for(int i =2; i<=n; i++)
for(int j=1; j<=min(i,k); j++)
{
dp[i] += dp[i-j]; dp[i]%=mod;}
wr(dp[n]);
	}
 
}


