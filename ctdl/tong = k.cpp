#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define int long long
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

main() {
	int t;  int a[1001],dp[1001];
re(t);
	while(t--)
	{
	    int n,k;
	    re(n);re(k);
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        re(a[i]);
	    }
	    memset(dp,0,sizeof(dp));
	    dp[0]=1;
	    for(i=1;i<=k;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            int l=(i-a[j]<0)?0:dp[i-a[j]];
	            dp[i]=(dp[i]+l)%1000000007;
	        }
	    }
	    wr(dp[k]);
	}

}