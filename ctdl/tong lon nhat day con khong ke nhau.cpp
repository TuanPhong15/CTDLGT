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
int max(int a, int b)
{
    return (a>b)?a:b;
}

int solve(int a[],int n)
{
    if(n==1)
    {
        return a[0];
    }
    if(n==2)
    {
        return max(a[0],a[1]);
    }
    if(n==3)
    {
        return max(a[0]+a[2],a[1]);
    }
    int dp[n];
    dp[0]=a[0];
    dp[1]=max(a[0],a[1]);
    for(int i=2;i<n;i++)
    {
        dp[i]=max(a[i]+dp[i-2],dp[i-1]);
    }
    
    return dp[n-1];
}

main() {

	int t, n;
	re(t);
	while(t--)
	{
	    re(n);
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        re(a[i]);
	    }
	    int p=solve(a,n);
	    wr(p);
	}

}