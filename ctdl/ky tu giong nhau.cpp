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
int dp[105]={0};

int max(int a,int b){
  return a > b ? a : b;
}

int min(int a,int b){
  return a < b ? a : b;
}


int solve(int n,int ins,int del,int copy)
{
	int i,j;
	dp[0] = 0;
	for(i=1;i<=n;++i) dp[i] = i*ins;
	
	for(i=2;i<=n;++i){
	    if(i%2 == 0) dp[i] = min(dp[i/2] + copy,dp[i]);
	    else dp[i] = min(dp[i-1] + ins,dp[i]);
	}
	
	
	for(i=3;i<=n;++i){
	    for(j=1;j<i;++j){
	        int c = j * 2;
	        if(c >= i) dp[i] = min(dp[i],dp[j] + copy + (j*2-i) * del);
	        else dp[i] = min(dp[i],dp[j] + copy + (i-c) * ins);
	    }
	}
	return dp[n];
}

main()
{
    	int i,n,t,x,y,z;
	re(t);

	while(t--)
	{
		re(n);re(x);re(y);re(z);
		wr(solve(n,x,y,z));
	}
}