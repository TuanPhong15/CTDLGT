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

main()
{
	int t, n; re(t);
	long long dp[101]={0}; 
 dp[1]=1; dp[2] =2;dp[3]=4;
 for(int i =4; i<=100; i++)
 dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
	 while(t--)
	{
	re(n); 
wr(dp[n]);
	}
 
}


